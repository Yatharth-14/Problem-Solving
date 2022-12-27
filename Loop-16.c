#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num=n;
    int a[2*n-1][2*n-1];
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = i; j < 2*n-1-i; j++)
        {
            for (int k = i; k < 2*n-1-i; k++)
            {
                if(j==i || j==2*n-2-i || k==i || k==2*n-2-i)
                {
                    a[j][k]=num;
                    a[k][j]=num;
                    
                }
            }
        }
        num--;
    }
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    
    
}