#include<stdio.h>
void read(int *a,int n);
void print(int *a,int n);
void linear(int *a,int n);
void main()
{
    int n,a[10];
    printf("Enter the array elements\n");
    scanf("%d",&n);
    read(a,n);
    print(a,n);
    linear(a,n);
}
void read(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the elements\n");
        scanf("%d",a+i);
    }
}
void print(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(a+i));
    }
}
void linear(int *a,int n)
{
    int num,f=0,i;
    printf("Enter the to be searched\n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(*(a+i)==num)
            {
                printf("%d found at position %d",num,i+1);
                break;
            }
            else
            {
                f=1;
            }
        }
}
