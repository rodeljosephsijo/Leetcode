class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }

        bool negetive = (dividend<0) != (divisor<0);

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long answer = 0;

        while (a>=b){
            long long temp = b;
            long long multiple = 1;

            while (a>=(temp << 1)){
                temp = temp << 1;
                multiple = multiple << 1;

            }
        a = a - temp;
        answer = answer + multiple;
        }

        if (negetive){
            answer = -answer;
        }

        return (int)answer;
    }
};