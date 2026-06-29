class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;

        for (const string& s : strs){
            array<int, 26> freq = {}; 
            for (char c : s) {
                freq[c - 'a']++;
            }

            string key(freq.begin(), freq.end());
            map[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& [key, group] : map) {
            result.push_back(group);
        }
        return result;
    }
};
