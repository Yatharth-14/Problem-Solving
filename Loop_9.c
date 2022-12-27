#include <stdio.h>
int main()
{
    int n, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i)
        {
            printf(" ");
            j++;
        }
        int k = 1;
        while (k <= 2 * i - 1)
        {
            printf("*");
            k++;
        }

        printf("\n");
        i++;
    }
    int i1 = 1;
    while (i1 <= n - 1)
    {
        int j = 1;
        while (j <= i1)
        {
            printf(" ");
            j++;
        }
        int k = 1;
        while (k <= 2 * (n - i1) - 1)
        {
            printf("*");
            k++;
        }

        printf("\n");
        i1++;
    }
    return 0;
}
