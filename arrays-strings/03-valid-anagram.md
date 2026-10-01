## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

We use a frequency array of size 26 to count how many times each lowercase letter appears in both strings. We increase the count for characters in the first string and decrease it for characters in the second string. If all counts become zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The frequency array works because the problem contains lowercase English letters. The test cases include both an anagram and a non-anagram.
