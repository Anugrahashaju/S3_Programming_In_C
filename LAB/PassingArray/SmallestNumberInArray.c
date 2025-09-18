#include <stdio.h>

int findSmallest(int arr[], int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int arr[] = {5, 2, 8, 1, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    //printf("The size of Array is %d ",size);
    //printf("%d",sizeof(arr));

    int smallestNumber = findSmallest(arr, size);

    printf("The smallest number in the array is: %d\n", smallestNumber);
    return 0;
}