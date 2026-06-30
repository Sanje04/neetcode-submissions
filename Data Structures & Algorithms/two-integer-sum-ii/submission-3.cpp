class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // store in two places 
        vector<int> indices;
        int l = 0;
        int r = numbers.size() - 1;

        for (int i=0; i<numbers.size(); i++){
            if ((numbers[l] + numbers[r]) < target){
                l++;
            }
            else if ((numbers[l] + numbers[r]) > target){
                r--;
            }
            else if ((numbers[l] + numbers[r]) == target){
                l++;
                r++;
                indices.push_back(l);
                indices.push_back(r);
                return indices;
            }
        }

        return {0, 0};
    }
};
