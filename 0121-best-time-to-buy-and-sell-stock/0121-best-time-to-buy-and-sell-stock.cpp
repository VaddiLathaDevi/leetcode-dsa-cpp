class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int i = 0;          // buy pointer
        int j = 1;          // sell pointer
        int maxProfit = 0;

        while (j < prices.size()) {
            if (prices[j] > prices[i]) {
                // valid profit
                maxProfit = max(maxProfit, prices[j] - prices[i]);
            } else {
                // found a cheaper price, move buy pointer
                i = j;
            }
            j++; // always move sell pointer forward
        }
        return maxProfit;
    } 
};