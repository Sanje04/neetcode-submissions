class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hashArray = {}
        maxElements = []

        for i in range(len(nums)):
            if nums[i] not in hashArray:
                hashArray[nums[i]] = 1
            else:
                hashArray[nums[i]] = 1 + hashArray[nums[i]]


        for key, value in hashArray.items():
            if len(maxElements) < k:
                maxElements.append(key)
            else:
                weakest = 0
                for j in range(k):
                    if hashArray[maxElements[j]] < hashArray[maxElements[weakest]]:
                        weakest = j

                # replace it if this number is more frequent
                if hashArray[key] > hashArray[maxElements[weakest]]:
                    maxElements[weakest] = key
    
        return maxElements

            
            

        