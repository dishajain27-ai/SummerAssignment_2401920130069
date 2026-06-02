// LeetCode 121: Best Time to Buy and Sell Stock
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX; // Start with a very high initial value
        int max_profit = 0;      // Minimum profit you can make is 0
        
        for (int price : prices) {
            // 1. Check if we found a new lowest buying price
            if (price < min_price) {
                min_price = price;
            } 
            // 2. Otherwise, check if selling today gives us a record-breaking profit
            else if (price - min_price > max_profit) {
                max_profit = price - min_price;
            }
        }
        
        return max_profit;
    }
};
