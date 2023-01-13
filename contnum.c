#include<stdio.h>
int main()
{
    int rows=5,i,j;

    // enter the number of rows
    
    for(i=1;i<=rows;i++)
    {
       for(j=1;j<=rows;j++)
       {
        printf(" * ");
       }
       printf("\n");
    
    for(i=1;i<=rows;i++)
    {
       for(j=i;j<=rows;j++)
       {
        printf(" * ");
       }
       printf("\n");
    }
    }
}