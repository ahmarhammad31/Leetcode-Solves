class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP = prices[0];
        int maxP = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < minP) {
                minP = prices[i];
            } else if (prices[i] - minP > maxP) {
                maxP = prices[i] - minP;
            }
        }
        return maxP;
    }
};