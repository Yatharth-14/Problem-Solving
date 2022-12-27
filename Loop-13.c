#include <stdio.h>
void repeat(int n);
int n;
int main()
{
    scanf("%d", &n);
    repeat(n);
    return 0;
}
int used = 0;
int neg = 0;
void repeat(int k)
{
    if (k > n && used != 0)
    {
        return;
    }
    else if (k > 0 && neg == 0)
    {
        printf("%d ", k);
        used = 1;
        repeat(k - 5);
    }
    else if (k <= 0 && neg == 0)
    {
        printf("%d ", k);
        neg = 1;
        repeat(k + 5);
    }
    else
    {
        printf("%d ", k);
        repeat(k + 5);
    }
}