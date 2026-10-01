#include <stdio.h>

void moveZeroes(int nums[], int n)
{
    int position = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    // Fill the remaining positions with zeroes
    while (position < n)
    {
        nums[position] = 0;
        position++;
    }
}

void printArray(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main()
{
    // Test Case 1
    int nums1[] = {0, 1, 0, 3, 12};
    int n1 = 5;

    moveZeroes(nums1, n1);

    printf("Test Case 1: ");
    printArray(nums1, n1);

    // Test Case 2 - all zeroes
    int nums2[] = {0, 0, 0};
    int n2 = 3;

    moveZeroes(nums2, n2);

    printf("Test Case 2: ");
    printArray(nums2, n2);

    return 0;
}