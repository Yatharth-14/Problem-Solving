#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    scanf("%d",&x);
    float sum=1;
    for (int i = 1; i <= n-1; i++)
    {
        int num=2*i;
        int fact=1;
        while (num>0)
        {
            fact*=num;
            num--;
        }
        if(i%2==0)
        {
            sum+= pow(x,2*i)/fact;
        }
        else
        {
            sum-= pow(x,2*i)/fact;
        }
    }
    printf("%f",sum);
    return 0;
    
}