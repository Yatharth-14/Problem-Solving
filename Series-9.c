#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        printf(" ");
        i++;
    }
}