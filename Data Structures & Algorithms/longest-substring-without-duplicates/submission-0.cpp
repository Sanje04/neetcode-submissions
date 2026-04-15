class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        //hash array for the substring
        std::hash<char> hasher;
        std::unordered_set<char> hashSet;
        int lenOfSub = 0;
        std::vector<int> lenAarry;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (hashSet.count(c)) {
                lenAarry.push_back(lenOfSub);
                //reset the values 
                i -= lenOfSub;
                hashSet.clear();
                lenOfSub=0;
            }
            else {
                hashSet.insert(c);
                lenOfSub++;
            }
        }
        lenAarry.push_back(lenOfSub);
        return *max_element(lenAarry.begin(), lenAarry.end());
    }
};