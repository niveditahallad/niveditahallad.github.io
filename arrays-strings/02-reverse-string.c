#include <stdio.h>

int main()
{
    // Test Case 1
    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    int n1 = 5;

    for (int i = 0; i < n1 / 2; i++)
    {
        char temp = s1[i];
        s1[i] = s1[n1 - 1 - i];
        s1[n1 - 1 - i] = temp;
    }

    printf("Test Case 1: ");
    for (int i = 0; i < n1; i++)
    {
        printf("%c", s1[i]);
    }
    printf("\n");

    // Test Case 2 - single character
    char s2[] = {'A'};
    int n2 = 1;

    for (int i = 0; i < n2 / 2; i++)
    {
        char temp = s2[i];
        s2[i] = s2[n2 - 1 - i];
        s2[n2 - 1 - i] = temp;
    }

    printf("Test Case 2: ");
    for (int i = 0; i < n2; i++)
    {
        printf("%c", s2[i]);
    }
    printf("\n");

    return 0;
}