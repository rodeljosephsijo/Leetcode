class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int bestbuy[100000];
        bestbuy[0] = INT_MAX;

        for( int i = 1; i<prices.size(); i++){
            bestbuy[i] = min(bestbuy[i-1], prices[i-1]);
        }
        
        int maxprofit = 0;

        for( int i = 0; i<prices.size(); i++){
            int currentprice = prices[i] - bestbuy[i];
            maxprofit = max(maxprofit, currentprice);
        }

        return maxprofit;
    }
};