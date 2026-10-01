## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

We use two pointers, left and right, to represent the current search range. We find the middle element and compare it with the target. If the target is larger, we search the right half; otherwise, we search the left half. This continues until the target is found or the search range becomes empty.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search works on a sorted array. The test cases include one case where the target is found and another where the target is not present.
