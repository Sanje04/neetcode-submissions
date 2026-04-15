class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int left = 0;
        int right = 1;
        // sort the prices first but keep of where they all are
        while (right < prices.size()){
            if (prices[left] < prices[right]){
                if ((prices[right] - prices[left]) > profit){
                    profit = prices[right] - prices[left];
                }
            }
            else {
                left = right;
            }
            right++;
        }
        return profit;
    }
};
