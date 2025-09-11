#include <stdio.h>

// Function to calculate sum of array elements
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int size = 5;

    int result = sumArray(numbers, size); // Passing array to function
    printf("Sum of elements = %d\n", result);

    return 0;
}
