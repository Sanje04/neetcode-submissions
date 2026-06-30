// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        vector<vector<Pair>> insertPairs;
        vector<Pair> arr = pairs;

        for(int i=0; i<arr.size(); i++){
            int j = i - 1;
            Pair key = arr[i];
            
            while (j >= 0 && arr[j].key > key.key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }

            arr[j+1] = key;

            insertPairs.push_back(arr);
        }

        return insertPairs;
    }
};
