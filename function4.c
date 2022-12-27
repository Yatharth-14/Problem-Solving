#include <stdio.h>
void perfect(int start, int end);
int main()
{
    int start, end;
    printf("Enter the range.\n");
    scanf("%d%d", &start, &end);
    perfect(start, end);

    return 0;
}
void perfect(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i ; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%d, ", i);
        }
    }
}