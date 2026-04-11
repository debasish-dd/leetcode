class Solution {
public:
    void ans(double x, long n, double &val) {
        if (n == 0) return;
        if (n % 2 == 1) {
            val = val * x;
            ans(x, n - 1, val);
        } else {
            x = x * x;
            ans(x, n / 2, val);
        }
    }

    double myPow(double x, long n) {
        if (n == 0) return 1;
        if (n == 1) return x;
        if (x == 0) return x;

        double val = 1;
        long nn = n;

        if (nn < 0) n = -n;
        ans(x, n, val);

        if (nn > 0) return val;
        else return 1.0 / val;
    }
};