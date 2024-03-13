#include<stdio.h>
#include<string.h>

void reverse(char *a);
void read(char *a);
void print(char *a);

int main() {
    char a[100];
    read(a);
    print(a);
    reverse(a);
    return 0;
}

void read(char *a) {
    printf("Enter the string");
    scanf("%s", a);
}

void print(char *a)
{
    printf("%s", a);
}

void reverse(char *a)
{
    int length = strlen(a);
    for (int i = 0; i < length / 2; i++)
        {
        char temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }
    printf("\nreversed string %s",a);
}
