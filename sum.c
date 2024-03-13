#include<stdio.h>
#include<math.h>
int number(int );
int main()
{
    int n,sum;
    printf("Enter the number\n");
    scanf("%d",&n);
    sum=number(n);
    printf("%d",sum);
}
int number(int n)
{
    int m=n;
    int i,fd,digit,sum=0,ld,a;
    ld=n%10;
    while(n!=0)
    {
     digit=digit+1;
     n=n/10;
    }
    printf("Digit=%d",digit);
    a=pow(10,digit-1);
    printf("\na =%d\n",a);
    fd=(m/a);
    printf("First digit=%d\n",fd);
    sum=ld+fd;
    return sum;
}

