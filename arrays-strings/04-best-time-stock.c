#include <stdio.h>

int main()
{
    // Test Case 1
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int n1 = 6;

    int minPrice1 = prices1[0];
    int maxProfit1 = 0;

    for (int i = 1; i < n1; i++)
    {
        if (prices1[i] < minPrice1)
        {
            minPrice1 = prices1[i];
        }

        int profit = prices1[i] - minPrice1;

        if (profit > maxProfit1)
        {
            maxProfit1 = profit;
        }
    }

    printf("Test Case 1: %d\n", maxProfit1);

    // Test Case 2 - prices always decrease
    int prices2[] = {7, 6, 4, 3, 1};
    int n2 = 5;

    int minPrice2 = prices2[0];
    int maxProfit2 = 0;

    for (int i = 1; i < n2; i++)
    {
        if (prices2[i] < minPrice2)
        {
            minPrice2 = prices2[i];
        }

        int profit = prices2[i] - minPrice2;

        if (profit > maxProfit2)
        {
            maxProfit2 = profit;
        }
    }

    printf("Test Case 2: %d\n", maxProfit2);

    return 0;
}