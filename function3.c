#include<stdio.h>
int fact(int num);
int main()
{
    printf("Enter number.\n");
    int n;
    scanf("%d",&n);
    int result = fact(n);
    printf("Factorial is: %d",result);
}
int factorial=1;
int fact(int num)
{
    if(num==1)
    {
        return factorial;
    }
    else
    {
        factorial*=num;
    }
    fact(num-1);
}