class Solution {
public:
    int findMin(vector<int> &arr) {
        int min = 0;
        int low = 0;
        int high = arr.size() - 1;

        while(low < high){
            int mid = low + (high - low) / 2;
            if (arr[mid] > arr[high]) {
                // minimum must be to the right of mid
                low = mid + 1;
            } else {
                // arr[mid] <= arr[high]: minimum is at mid or to its left
                high = mid;
            }
        }
        return arr[low];
    }
};
