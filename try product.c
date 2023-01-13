#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    
    printf("enter two number\n");
    scanf("%d %d", &a,&b);
    c=a*b;
    
    printf("product of %d and %d is %d",a,b,c);
    getch();
}