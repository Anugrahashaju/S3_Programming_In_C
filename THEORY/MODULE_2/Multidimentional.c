
//Multidimentional Program to print the 2d array
#include <stdio.h>

int main() {
    int rows = 3, cols = 5;
    int matrix[3][5] = {
        {1, 2, 3, 4, 5},
        {10, 20, 30, 40, 50},
        {5, 10, 15, 20, 25}
    };

    printf("The matrix is:\n");

    // Loop through rows
    for (int i = 0; i < rows; i++) {
        // Loop through columns
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]); // print each element with tab space
        }
        printf("\n"); // move to next row
    }

    return 0;
}

/***
 * 

// Program to print the Matrix addition
#include <stdio.h>

int main() {
    int rows = 2, cols = 3;
    int matrix1[2][3], matrix2[2][3], sum[2][3];

    // Input first matrix
    printf("Enter elements for the first matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element : ");
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements for the second matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element : ");
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate sum of the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print result
    printf("Sum of the two matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
    }
    printf("\n");

    return 0;
}

 */