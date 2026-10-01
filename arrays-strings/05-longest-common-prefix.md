## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

We compare the characters of all strings at the same position. Starting from the first character, we continue while all strings have the same character. When a mismatch is found, the common prefix ends.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

The solution checks all strings character by character. The test cases include one case with a common prefix and one case with no common prefix.
