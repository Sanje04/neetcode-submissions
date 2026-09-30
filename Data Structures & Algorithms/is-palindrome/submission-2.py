class Solution:
    def isPalindrome(self, s: str) -> bool:
        l = 0;
        r = len(s) - 1

        while l < r:
            while not s[l].isalnum():
                l = l + 1
                if (l > r):
                    return True
            while not s[r].isalnum():
                r = r - 1
                if (l > r):
                    return True
            
            if s[l].upper() != s[r].upper():
                return False
            
            l = l + 1
            r = r - 1
        


        return True

        