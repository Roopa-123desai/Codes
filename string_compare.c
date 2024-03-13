#include<stdio.h>
void read(char *a,char *b);
void print(char *a,char *b);
void compare(char *a,char *b);
 void main()
 {
     int flag=0;
     char a[10],b[10];
     read(a,b);
     print(a,b);
     compare(a,b);
 }
 void read(char *a,char *b)
 {
     printf("Enter the string 1\n");
     scanf("%s",a);
     printf("Enter the string 2\n");
     scanf("%s",b);
 }
 void print(char *a,char *b)
 {
     //printf("Enter the string 1"\n);
     printf("%s\n",a);
     //printf("Enter the string 2"\n);
     printf("%s",b);
 }
 void compare(char *a,char *b)
 {
     int i,flag=0;
     for(i=0;a[i]!='\0';i++)
     {
         if(a[i]==b[i])
         {
             flag=1;
         }
         else
         {
             flag=0;
         }
     }
     if(flag==1)
     {
         printf("\nEqual\n");
     }
     else
     {
         printf("Not equal\n");
     }

 }

