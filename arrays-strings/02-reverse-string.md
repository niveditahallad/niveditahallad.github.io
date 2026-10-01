## Problem: Reverse String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

We use two pointers, one starting from the beginning and one from the end of the array. We swap the characters at these positions and move both pointers toward the center. This continues until the entire string is reversed.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution reverses the string in-place without using another array. The single-character test case also works correctly.
