#include<stdio.h>
int main()
{
    int n;int a[100]={0};
    scanf("%d",&n);
    int i=1;
    a[0]=1;
    int index=0;
    while (i<=n)
    {
        int b[100]={0};
        if(i==1)
        {
            printf("%d",a[0]);
        }
        
        else
        {
            index=0;
            int j=0,k=0,element=0;
            while (a[j]!=0)
            {
                int count=0;
                while(a[k]!=0)
                {
                    if(a[k]!=a[j])
                    {
                        break;
                    }
                    else
                    {
                        count+=1;
                        element=a[j];
                    }
                    k++;
                }
                j++;
                while(a[j]==a[j-1])
                {
                    j++;
                }
                b[index]=count;
                index++;
                b[index]=element;
                index++;
            }
            
        }

        for (int var = 0; var < index; var++)
        {
            printf("%d ",b[var]);
        }
        printf("\n");

        for (int l = 0; l < index; l++)
        {
            a[l]=b[l];
        }
        i++;
    }
    
}