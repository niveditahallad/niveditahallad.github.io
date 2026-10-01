## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

We check every possible pair of elements in the array using two loops. If the sum of two elements is equal to the target value, we print their indices.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The solution should not use the same array element twice. Therefore, the second loop starts from `i + 1`. The duplicate-value test case `[3, 3]` also works correctly.
