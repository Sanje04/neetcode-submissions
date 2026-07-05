class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();          // n itself, since indices only go to n-1
        for (int i = 0; i < nums.size(); i++) {
            result ^= i;                   // XOR in the index
            result ^= nums[i];             // XOR in the value
        }
        return result;
    }
};
