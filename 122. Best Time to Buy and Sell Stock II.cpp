class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int totalProfit =0;

       for(int i=1;i<prices.size();i++) {
        int profit=0;
        if (prices[i] > prices[i-1]) {
            profit = prices[i]-prices[i-1];
        }
        totalProfit = totalProfit+profit;
       } 
       return totalProfit;
    }
};
