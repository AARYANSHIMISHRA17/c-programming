#include <stdio.h>

int main()
 {
    int matrix[3][3];
    int rowSum, colSum;

    
    printf("Enter elements of a 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }

    
    printf("Sum of each row:\n");
    for (int i = 0; i < 3; i++) {
        rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rowSum);
    }

    
    printf("Sum of each column:\n");
    for (int j = 0; j < 3; j++) {
        colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum= colSum+ matrix[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, colSum);
    }

    return 0;
}
