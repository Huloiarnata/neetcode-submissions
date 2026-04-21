class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
         * Checking brute force - iterate over all O(n^2)
         */
        int maxProfit = 0;
        int numPrices = prices.size();
        int i, j;

        for (i = 0; i < numPrices-1 ; i++) {
            int costPrice = prices[i];
            for (j = i+1; j < numPrices; j++) {
                // if next price[j] < price[i] - skip
                int sellPrice = prices[j];
                if (sellPrice <= costPrice) {
                    continue;
                }
                int tempProfit = sellPrice - costPrice;
                maxProfit = max(tempProfit, maxProfit);
            }
        }
        return maxProfit;
    }
};
