//Fibonacci series
#include<stdio.h>
void main()
{
    int num1,num2,num3,n,i;
    num1=0,num2=1;
    printf("Enter the range\n");
    scanf("%d",&n);
    printf("%d\t%d\t",num1,num2);
    for(i=3;i<=n;i++)
    {
    num3=num1+num2;
    printf("%d\t",num3);
    num1=num2;
    num2=num3;
    num3=num1+num2;
    }
}
