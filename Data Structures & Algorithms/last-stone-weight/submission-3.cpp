class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        vector<int> arr = stones;
        while(arr.size() > 1){
            auto maxIt = max_element(arr.begin(), arr.end());
            int maxVal = *maxIt;
            arr.erase(maxIt);

            auto nextMaxIt = max_element(arr.begin(), arr.end());
            int nextMaxVal = *nextMaxIt;
            arr.erase(nextMaxIt);

            int value = maxVal - nextMaxVal;

            if (value > 0) {
                arr.push_back(value);
            }

        }
        if ((arr.size()) == 0){
            return 0;
        }
        else {
            return arr[0];
        }
    }
};
