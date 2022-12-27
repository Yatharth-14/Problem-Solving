#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        if (i == 1 || i == n)
        {
            int j = 1;
            while (j <= n)
            {
                printf("*");
                j++;
            }
        }
        else
        {
            int j = 1;
            while (j <= n - i)
            {
                printf(" ");
                j++;
            }
            printf("*");
        }
        printf("\n");
        i++;
    }
}