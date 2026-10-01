## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

We keep track of the minimum stock price seen so far. For each day, we calculate the profit by subtracting the minimum price from the current price. If this profit is greater than the maximum profit found so far, we update the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution allows buying before selling because the minimum price is always taken from an earlier day. The second test case checks the situation where prices continuously decrease, so the maximum profit is 0.
