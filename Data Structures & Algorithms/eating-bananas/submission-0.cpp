class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // amount of piles
        int amount = piles.size();
        // [1.. 2.. ..k]
        int low = 1;
        int high = 0;
        cout << "test";
        //finding the largest pile
        for (int i = 1; i < amount; i++) {
            if (piles[i] > piles[high]) {
                high = i;
            }
        }

        high = piles[high];
        int hours = 0;
        while (low <= high) {
            // bananas per hour
            int mid = low + (high - low) / 2;
            hours = 0;
            //testing speed:
            for (int i = 0; i < amount; i++) {
                int hoursSpent = piles[i] / mid;
                hours = hours + hoursSpent;
                if (piles[i] % mid > 0){
                    hours++;
                }
            }
            if (hours <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }    
        }
        return low;
    }
};
