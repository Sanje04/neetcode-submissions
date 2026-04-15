class Solution {
public:
    bool isPalindrome(string s) {
        // track for the last letter
        int j = 0;

        for (int i=0; i<s.length(); i++){
            // checking it the two characters have met
            if (i == s.length() - 1 - j) {
                break;
            }

            //check if the last character is alphanumerical
            while (j < s.length() && !isalnum(s[s.length() - 1 - j])) {
                j++;
            }

            // Skip non-alphanumeric characters from the front
            if (!isalnum(s[i])) continue;

            if (tolower(s[i]) != tolower(s[s.length() - j - 1])){
                return false;
            }
            j++;
        }

        return true;
        
    }
};
