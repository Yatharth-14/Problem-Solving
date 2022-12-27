#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number.\n");
    scanf("%d",&n);
    int x=n;int palin=0;
    while(x!=0)
    {
        int last=x%10;
        palin=(palin*10)+last;
        x=x/10;
    }
    if(palin==n)
    {
        printf("Number is palindrome.\n");
    }
    else
    {
        printf("Number is not palindrome.");
    }
    return 0;
}