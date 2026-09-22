class Solution {
public:
    long long MOD = 1000000007;

    long long power(long long a, long long b) {
        if (b == 0)
            return 1;

        long long half = power(a, b / 2);

        if (b % 2 == 0)
            return (half * half) % MOD;

        return ((half * half) % MOD * a) % MOD;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        return (power(5, even) * power(4, odd)) % MOD;
    }
};