#include <stdio.h>

void multiplication(int matrix1[][10], int rows, int cols, int matrix2[][10],  int ans[][10]) {
    int i, j, k;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            ans[i][j] = 0;
            for (k = 0; k < cols; k++) {
                ans[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void main() {
    int matrix1[10][10], matrix2[10][10], rows, cols, ans[10][10];
    int i, j;

    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols);
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    multiplication(matrix1, rows, cols, matrix2, ans);

    printf("Resultant Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
    
}
