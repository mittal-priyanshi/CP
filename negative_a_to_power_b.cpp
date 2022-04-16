class Solution {
public:
    double myPow(double a, int m) {
        double res = 1.0000;
        long long n = (long long) m; 
        if (n < 0)
            a = 1/a, n = -1 * n;
        while (n) {
            if(n & 1)
                res = (res * a);
            a = a * a;
            n >>= 1;
        }
        return res;
    }
};
