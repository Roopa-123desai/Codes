//In a company an employee is paid as under if basic salary is less than Rs 15000,than HRA 10% of basic salary and DA is 50% of basic salary.
//> 15000 and <30000 ,HRA=20% DA=60% 2.>30000 and <50000 HRA=30% DA=60% >50000 HRA=40% DA=80%
//find out the gross salary of employee if Basic salary is input
#include<stdio.h>
void main()
{
    float BA,Gross;
    printf("enter the basic salary\n");
    scanf("%f",&BA);
    if(BA<0)
    {
        printf("Invalid input\n");
        exit(0);
    }
    if(BA>=15000&&BA<=30000)
    {
        Gross=BA+BA*0.2+BA*0.6;
        printf("Gross=%0.1f",Gross);
    }
    if(BA>30000&&BA<=50000)
    {
        Gross=BA+BA*0.3+BA*0.7;
        printf("Gross=%0.1f",Gross);
    }
    if(BA>50000)
    {
        Gross=BA+BA*0.4+BA*0.8;
        printf("Gross=%0.1f",Gross);
    }
}
