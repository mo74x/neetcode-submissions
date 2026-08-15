class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int maxProf = 0;
        int minBuy = prices[0];

        for (int sell : prices) {
            maxProf = max(maxProf, sell - minBuy);
            minBuy = min(minBuy, sell);
        }
        return maxProf;
    }
};
