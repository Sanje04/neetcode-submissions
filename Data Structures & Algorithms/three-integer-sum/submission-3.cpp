class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // sort the array
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++){
            //duplicate
            if (i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            //l and r postringstream
            int l = i + 1;
            int r = nums.size() - 1;

            while (l < r) {
                int sum3 = nums[i] + nums[l] + nums[r];
                if (sum3 < 0){
                    l++;
                }
                else if (sum3 > 0){
                    r--;
                }
                else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l-1]) {
                        l++;
                    }
                    while (l < r && nums[r] == nums[r+1]){
                        r--;
                    }
                }
            }
        }

        return res;
    }
};
