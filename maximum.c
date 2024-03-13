#include <stdio.h>

void read(int[], int);
void print(int[], int);
void sort(int[], int);
int largestnumber(int[],int);

int main() {
    int n, a[30];
    printf("Enter the array size: ");
    scanf("%d", &n);
    read(a, n);
    printf("\narray before sorting:\n");
    print(a, n);
    sort(a, n);
    printf("\nafter sorting:\n");
    print(a, n);
    int large=largestnumber(a,n);
    printf("%d",large);
    return 0;
}

void read(int *a, int n) {
    int i;
    printf("enter the array elements\n");
    for (i = 0; i < n; i++) {
        scanf("%d", a+i);
    }
}

void print(int *a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", *(a+i));
    }
    printf("\n");
}

void sort(int *a, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(a + j) > *(a + j + 1)) {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }
}
int largestnumber(int a[],int n)
{
    int i;
    if(n<2)
    {
        printf("Array is too small\n");
    }


}

