## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

We use a stack to store opening brackets. When a closing bracket is found, we check whether it matches the most recent opening bracket. If all brackets match correctly and the stack is empty at the end, the string is valid.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The stack follows the Last In, First Out (LIFO) principle. The test cases include one valid bracket sequence and one invalid sequence.
