#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        // for printing left part
        int j = 1;
        while (j <= i)
        {
            printf("%d", j);
            j++;
        }
        // for printing spaces
        int spaces = 1;
        while (spaces <= 2 * n - 2 * i)
        {
            printf(" ");
            spaces++;
        }
        // for printing right part
        int k = i;
        while (k >= 1)
        {
            printf("%d", k);
            k--;
        }
        printf("\n");
        i++;
    }
}