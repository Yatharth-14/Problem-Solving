#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int num = 2 * i - 1;
        double fact = 1.0;
        while (num > 0)
        {
            fact *= num;
            num--;
        }
        if (i % 2 == 0)
        {
            sum = i / fact;
        }
        else
        {
            sum += i / fact;
        }
    }
    printf("%f", sum);
    return 0;
}