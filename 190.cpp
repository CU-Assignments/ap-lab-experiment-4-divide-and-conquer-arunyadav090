class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i = 0; i < 32; i++) {
            ans <<= 1;
            ans |= (n & 1);
            n >>= 1;
        }
        return ans;
    }
};

*test case*

Case 1
Case 2
Input
n =
00000010100101000001111010011100
Output
   964176192 (00111001011110000010100101000000)
Expected
   964176192 (00111001011110000010100101000000)
