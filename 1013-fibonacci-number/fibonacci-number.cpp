class Solution {
public:
    int fib(int n) {
          if (n == 0) {
       // cout << 0;
        return 0;
    }
    if (n == 1) {
       // cout << 1;
        return 1;
    }
    int a = 0, b = 1, fib;
    for (int i = 2; i <= n; i++) {
        fib = a + b;  // F(n) = F(n-1) + F(n-2)
        a = b;
        b = fib;
    }
    return fib;
    }
};