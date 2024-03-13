//Write a modular C-program to find roll number of student who has scored maximum and minimum marks in exam
#include<stdio.h>
void read(float[],int);
void print(float[],int);
void maximum(float[],int);
void minimum(float[],int);

int main()
{
    int n;
    float marks[100];
    printf("Enetr the number of student\n");
    scanf("%d",&n);
    read(marks,n);
    print(marks,n);
    maximum(marks,n);
    minimum(marks,n);
}
void read(float marks[],int n)
{
    int i;
    printf("Enter the marks\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&marks[i]);
    }
}
void print(float marks[],int n)
{
    int i;
    //printf("Enter the marks\n");
    for(i=0;i<n;i++)
    {
        printf("%f\n",marks[i]);
    }
}
void maximum(float marks[],int n)
{
    int i,x=0;
    float max=marks[0];
    for(i=1;i<n;i++)
    {
        if(marks[i]>max)
        {
            max=marks[i];
            x=i;
        }
    }
     printf("%d student has scored highest %0.1f marks in exam\n",x+1,max);
}
void minimum(float marks[],int n)
{
    int i,x=0;
    float min=marks[0];
    for(i=1;i<n;i++)
    {
        if(marks[i]<min)
        {
            min=marks[i];
            x=i;
        }
    }
    printf("%d student has scored minimum %0.1f marks in exam",x+1,min);
}
