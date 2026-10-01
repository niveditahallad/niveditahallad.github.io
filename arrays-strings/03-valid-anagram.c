#include <stdio.h>
#include <string.h>

int main()
{
    // Test Case 1
    char s1[] = "anagram";
    char t1[] = "nagaram";
    int count1[26] = {0};

    for (int i = 0; s1[i] != '\0'; i++)
    {
        count1[s1[i] - 'a']++;
    }

    for (int i = 0; t1[i] != '\0'; i++)
    {
        count1[t1[i] - 'a']--;
    }

    int result1 = 1;

    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != 0)
        {
            result1 = 0;
            break;
        }
    }

    printf("Test Case 1: %s\n", result1 ? "true" : "false");

    // Test Case 2 - not an anagram
    char s2[] = "rat";
    char t2[] = "car";
    int count2[26] = {0};

    for (int i = 0; s2[i] != '\0'; i++)
    {
        count2[s2[i] - 'a']++;
    }

    for (int i = 0; t2[i] != '\0'; i++)
    {
        count2[t2[i] - 'a']--;
    }

    int result2 = 1;

    for (int i = 0; i < 26; i++)
    {
        if (count2[i] != 0)
        {
            result2 = 0;
            break;
        }
    }

    printf("Test Case 2: %s\n", result2 ? "true" : "false");

    return 0;
}