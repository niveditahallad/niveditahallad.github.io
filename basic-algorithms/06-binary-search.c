#include <stdio.h>

int main()
{
    // Test Case 1
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    int n1 = 6;
    int target1 = 9;

    int left = 0;
    int right = n1 - 1;
    int result1 = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums1[mid] == target1)
        {
            result1 = mid;
            break;
        }
        else if (nums1[mid] < target1)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("Test Case 1: %d\n", result1);

    // Test Case 2 - target not found
    int nums2[] = {-1, 0, 3, 5, 9, 12};
    int n2 = 6;
    int target2 = 2;

    left = 0;
    right = n2 - 1;
    int result2 = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums2[mid] == target2)
        {
            result2 = mid;
            break;
        }
        else if (nums2[mid] < target2)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("Test Case 2: %d\n", result2);

    return 0;
}