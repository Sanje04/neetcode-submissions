class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        // reverse the integer order
        uint32_t reverseBits = 0;
        // calculate he value
        for (int i = 0; i<32; i++){
            if ((1 << i) & n){
                reverseBits = pow(2, 31-i) + reverseBits;
                cout << reverseBits << endl;
            }
        }
        
        return reverseBits;
    }
};
