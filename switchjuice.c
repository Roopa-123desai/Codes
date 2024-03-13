//A royal juice center has launched the following fresh fruit juice for this summer
//Type of beverages     Price per unit
//A-apple shake           25
//K-kiwi juice            30
//S-straberry juice       50
//M-Mango Juice           45
// O-Orange juice         60
//W-watermelon juice      40
//Write a c-program to read type of bevareages as a character and quantity of beverages compute the total amount to be paid by the customer based on the type and quantity of beverages selected Rs=1 is to be added for the total amount contribution towards natural calamity for each
#include<stdio.h>
void main()
{
    float q,total;
    char beverage;
    printf("Enter the type of beverage and quantity\n");
    scanf("%c%f",&beverage,&q);
    switch(beverage)
    {
    case 'A':
        total=(q*25)+1;
        printf("Total=%0.1f",total);
        break;
    case 'K':
        total=(q*30)+1;
        printf("Total=%0.1f",total);
        break;
    case 'S':
        total=(q*50)+1;
        printf("Total=%0.1f",total);
        break;
    case 'M':
        total=(q*45)+1;
        printf("Total=%0.1f",total);
        break;
    case 'O':
        total=(q*60)+1;
        printf("Total=%0.1f",total);
        break;
    case 'W':
        total=(q*40)+1;
        printf("Total=%0.1f",total);
        break;
    }
}
