//Divide two integers without using multiplication, division and mod operator.

class Solution {
public:
    int divide(int dividend, int divisor) {
        long long int res = 0;
        long long int c = abs((long long int)dividend);
        long long int b = abs((long long int)divisor);
        while(c >= b) {
            long long int a = b;
            for(int i = 1; c >= a; a = a<<1, i = i<<1) {
                c -= a;
                res += i;
            }
        }
        return ((dividend^divisor)>>31) ? -res : res;
    }
};
