#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i=0;
    while (str[i]!='\0')
    {
        int dots=1;
        while (dots<=i)
        {
            printf(".");
            dots++;
        }
        int k=i;
        while(str[k]!='\0')
        {
            printf("%c",str[k]);
            k++;
        }
        printf("\n");
        i++;
    }
    
}