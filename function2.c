#include<stdio.h>
void mean(int arr[]);
void median(int arr[]);
int main()
{
    printf("Enter the numbers.\n");
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    mean(a);
    median(a);
}
void mean(int arr[])
{
    int sum=0;
    for (int  i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    float result = sum/5;
    printf("Median of the numbers: %.2f\n",result);
}
void median(int arr[])
{
    int n = (5+1)/2;
    printf("Median is: %d",arr[n-1]);
}