//reverse array
#include<stdio.h>

void read(int[], int);
void print(int[], int);
void reverse(int[], int);

int main() {
    int i, n;
    int a[20];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    read(a, n);
    printf("Original array: ");
    print(a, n);
    reverse(a, n);
    printf("\nReversed array: ");
    print(a, n);
    return 0;
}

void read(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void print(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reverse(int a[], int n) {
    int i, x;
    for (i = 0; i < n / 2; i++) {
        x = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = x;
    }
}
