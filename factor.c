#include<stdio.h>
int main()
{
    int i,a,factor;
    printf("enter the number to find factor: ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        if(a%i == 0)
        {
            printf(" %d ", i);
        }

    }
}