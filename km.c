#include<stdio.h>
void main()
{
    int n,m,fact=1,sum,d;
    printf("ENTER THE NUMBER\n");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        d=n%10;
        fact=1;
        for(int i=0;i>=n;i++)
        {
        fact*=i;
        }
        sum+=fact;
        n/=10;

    }
    if(sum==m)
    printf("YES");
    else
    printf("NO");
}