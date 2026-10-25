#include <stdio.h>

int main() {
    int rows, cols, i, j, sum;
 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    sum = 0;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum = sum + matrix[i][j];
        }
    }

    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
