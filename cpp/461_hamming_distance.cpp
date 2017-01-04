class Solution {
public:
    int hammingDistance(int x, int y) {
        int xor_result = x^y;
        int bit_count = 0;
        return __builtin_popcount (xor_result);
    }
    
};