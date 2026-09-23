class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        vector<int> need(26), window(26);
        for (char c : s1) need[c - 'a']++;
        for (int i = 0; i < s2.size(); ++i) {
            window[s2[i] - 'a']++;
            if (i >= s1.size()) window[s2[i - s1.size()] - 'a']--;
            if (window == need) return true;
        }
        return false;
    }
};
