#include<stdio.h>
#include<math.h>
int main()
{
int n,m,c=0,sum=0,rem,o;
printf("enter the number to be checked: ");
scanf("%d",&n);
m=n;
o=m;
while(n>0)
{
    c+=1;
    n/=10;
}
while(m>0)
{
    rem=m%10;
    sum=sum+pow(rem,c);
    m/=10;
}
if(sum==o)
printf("%d is an armstrong number", o);
else
printf("%d is not an armstrong number",o);
}

