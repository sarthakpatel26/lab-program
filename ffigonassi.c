#include<stdio.h>
int main()
{
    int a,b,result,i,n;
    printf("enter the number of palces: ");
    scanf("%d",&n);
    a=0;
    b=1;

    for(i=1;i<=n;i++)
    {
        printf("%d\n" , a);
        result=a+b;
        a=b;
        b=result;
    }
}