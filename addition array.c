#include<stdio.h>
int main()
{
int a[2][3],j,i,b[2][3],c[2][3];
printf("enter the matix");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the second array");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("Third matrix will be\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]*b[i][j];
printf("%d\t",c[i][j]);
}
printf("\n");

}

}

