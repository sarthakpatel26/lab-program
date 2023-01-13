#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter number a and b :");
    scanf("%d %d", &a, &b);
    
    printf("%d\n",(a<b)&&(a!=b));
    printf("%d\n",(a<b)||(b<a));
    printf("%d\n",!(a==b));
}