class Solution {
public:
    vector<int> countBits(int n) {
        //0000
        //1, 10,11,100
        vector<int> output(n + 1);
        int offset = 1;

        for (int i = 1; i <= n; i++){
            if (offset * 2 == i){
                //updating the offset
                offset = i;
            }

            output[i] = 1 + output[i - offset];
        }

        return output;
    }
};
