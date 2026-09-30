class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        countS = {}
        countT = {}

        for i in range(len(s)):
            char = s[i]
            charT = t[i]
            if char in countS:
                countS[char] = countS[char] + 1
            else:
                countS[char] = 1
            if charT in countT:
                countT[charT] = countT[charT] + 1
            else:
                countT[charT] = 1

        return countS == countT