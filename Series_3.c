#include<stdio.h>
#include<math.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    scanf("%d",&x);
    float sum=0;
    for (int i = 0; i < n; i++)
    {
        int num=i;
        int fact=1;
        while (num>0)
        {
            fact*=num;
            num--;
        }
        
        sum+= pow(x,i)/fact;
    }
    printf("%f",sum);
    return 0;
    
}