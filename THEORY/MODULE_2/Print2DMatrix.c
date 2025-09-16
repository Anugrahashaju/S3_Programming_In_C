#include <stdio.h>

// Function to print a 2D matrix passing array function
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("The matrix is:\n");
    printMatrix(2, 3, matrix); // Passing 2D array to function

    return 0;
}
