#include<stdio.h>

int main() {
    int rows, i, j;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows; j++) {
            if (i == j) {
                printf("1\t");
            } else {
                printf("0\t");
            }=
        }
        printf("\n");
    }

    return 0;
}

