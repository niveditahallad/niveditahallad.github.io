#include <stdio.h>

int main()
{
    // Test Case 1
    char *strs1[] = {"flower", "flow", "flight"};
    int n1 = 3;

    int i = 0;

    while (strs1[0][i] != '\0')
    {
        char current = strs1[0][i];

        for (int j = 1; j < n1; j++)
        {
            if (strs1[j][i] != current || strs1[j][i] == '\0')
            {
                goto end1;
            }
        }

        i++;
    }

end1:
    printf("Test Case 1: ");
    for (int j = 0; j < i; j++)
    {
        printf("%c", strs1[0][j]);
    }
    printf("\n");

    // Test Case 2 - no common prefix
    char *strs2[] = {"dog", "racecar", "car"};
    int n2 = 3;

    i = 0;

    while (strs2[0][i] != '\0')
    {
        char current = strs2[0][i];

        for (int j = 1; j < n2; j++)
        {
            if (strs2[j][i] != current || strs2[j][i] == '\0')
            {
                goto end2;
            }
        }

        i++;
    }

end2:
    printf("Test Case 2: ");
    for (int j = 0; j < i; j++)
    {
        printf("%c", strs2[0][j]);
    }
    printf("\n");

    return 0;
}