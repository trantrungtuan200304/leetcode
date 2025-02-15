class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // use two pointers
        
        int maxPrice = 0;
        int indexBuy = 0;
        int indexSell = 1;
        int profit;
        while (indexSell < prices.size()) {
            if (prices[indexSell] > prices[indexBuy]) {
                profit = prices[indexSell] - prices[indexBuy];
                if (profit > maxPrice) {
                    maxPrice = profit;
                }
            }
            // if prices[indexSell] < prices[indexBuy]
            else indexBuy = indexSell;
            indexSell++;
        }
        return maxPrice;
    }
};
