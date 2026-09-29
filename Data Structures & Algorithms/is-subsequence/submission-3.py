class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        prev_index = -1

        for i in range(len(s)):
            if s[i] in t:
                curr_index = t.find(s[i], prev_index + 1)
                if (curr_index < prev_index):
                    return False
                else:
                    prev_index = curr_index
            else:
                return False
                
        
        return True

        