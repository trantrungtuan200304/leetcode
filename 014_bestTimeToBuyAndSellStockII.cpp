class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int indexSell = 1;
        int indexBuy = 0;
        int totalProfit = 0;
        int profit = 0;
        while (indexSell < prices.size()) {
            if (prices[indexSell] > prices[indexBuy]) {
                profit = prices[indexSell] - prices[indexBuy];
                totalProfit += profit;
            } 
            indexBuy++;
            indexSell++;
        }
        return totalProfit;
    }
};
