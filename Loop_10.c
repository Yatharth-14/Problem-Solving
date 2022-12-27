#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // for printing upper half
    int i = 2 * n - 1;
    while (i >= n)
    {
        // for printing spaces
        int spaces = 1;
        while (spaces <= 2 * n - 1 - i)
        {
            printf(" ");
            spaces++;
        }
        // for printing stars
        int deduct = 2 * n - 1 - i;
        int stars = 1;
        while (stars <= i - deduct)
        {
            printf("*");
            stars++;
        }
        printf("\n");
        i--;
    }
    // for printing lower half
    int j = 1;
    while (j <= n - 1)
    {
        // for printing spaces
        int spaces = 1;
        while (spaces <= n - 1 - j)
        {
            printf(" ");
            spaces++;
        }
        // for printing stars
        int stars = 1;
        while (stars <= 2 * j + 1)
        {
            printf("*");
            stars++;
        }
        printf("\n");
        j++;
    }
}