class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int pricesCount = prices.size();
        int costPriceIDX = 0, sellPriceIDX = 1;

        if (pricesCount <= 1)
            return maxProfit;

        while (sellPriceIDX < pricesCount) {
            if (prices[costPriceIDX] < prices[sellPriceIDX])   
                maxProfit = max(maxProfit,
                    (prices[sellPriceIDX] - prices[costPriceIDX]));
            else
                costPriceIDX = sellPriceIDX;

            sellPriceIDX++;
        }
        return maxProfit;
    }
};
