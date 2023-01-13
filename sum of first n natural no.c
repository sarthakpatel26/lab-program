#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,s=0;
    printf("enter a number");
    scanf("%d",& n);
    for(i=0;i<=n;i++)
    s=s+i;
    printf("sum is %d",s);
    getch();
}