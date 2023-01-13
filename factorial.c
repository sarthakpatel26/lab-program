#include<stdio.h>
int main()
{
    int i,num;
    long fact=1;
    printf("enter the number to find factorial of: ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        fact = fact*i;

    }
    printf("factorial of %d =%d\n",num,fact);
    return 0;
}