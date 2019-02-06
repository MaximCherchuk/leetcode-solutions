class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reversed_integer = 0;
        for(int i = 0; i < 31; ++i) {
            if(n & 1) {
                reversed_integer |= 1;
            }
            n >>= 1;
            reversed_integer <<= 1;
        }
        if (n & 1) {
            reversed_integer |= 1;
        }
        return reversed_integer;
    }
};
