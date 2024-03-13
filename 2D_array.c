#include <stdio.h>

void read(int a[10][10], int n, int m);
void print(int a[10][10], int n, int m);
void sort(int a[10][10], int n, int m);

int main() {
    int n, m, a[10][10];
    printf("Enter the array row size:\n");
    scanf("%d", &n);
    printf("Enter the array column size:\n");
    scanf("%d", &m);
    read(a, n, m);
    printf("Original array is:\n");
    print(a, n, m);
    sort(a, n, m);
    printf("Sorted array is:\n");
    print(a, n, m);
    return 0;
}

void read(int a[10][10], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            //printf("Enter the array element at position (%d,%d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void print(int a[10][10], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void sort(int a[10][10], int n, int m) {
    int i, j, k, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            for (k = j + 1; k < m; k++) {
                if (a[i][j] > a[i][k]) {
                    temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
}
