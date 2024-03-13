//armstrong number
#include<stdio.h>
void main()
{
    int n,rem,sum,num;
    sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(sum==num)
    {
        printf("%d is armstrong number.\n",num);
    }
    else
    {
        printf("%d is not armstrong number\n",num);
    }
}
