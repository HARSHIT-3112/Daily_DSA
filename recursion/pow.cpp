#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        // Convert n to long long to handle edge cases like INT_MIN
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double result = 1.0;
        while (N > 0) {
            // If N is odd, multiply result by x
            if (N & 1)
                result *= x;
            // Square x for the next bit of N
            x *= x;
            // Shift N to process the next bit
            N /= 2;
        }
        return result;
    }
};

int main() {
    Solution sol;
    double x = 2.00000;
    int n = 10;
    cout << "myPow(" << x << ", " << n << ") = " << sol.myPow(x, n) << endl;
    // Expected Output: myPow(2.000000, 10) = 1024.000000
    return 0;
}
