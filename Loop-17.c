#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    while (i<=n)
    {
        int inc=1;
        while(inc<=i)
        {
            printf("%d",inc);
            inc++;
        }
        int dec=i-1;
        while (dec>=1)
        {
            printf("%d",dec);
            dec--;
        }
        printf(" ");
        i++;
    }
    
}