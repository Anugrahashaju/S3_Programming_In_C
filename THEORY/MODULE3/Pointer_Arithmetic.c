#include<stdio.h>
int main()
{

    int arr[3] = {10, 20, 30};
    int *ptr = arr; // ptr points to the first element (arr[0])
    
    printf("Value at ptr: %d\n", *ptr); // Output: 10
    printf("Value at ptr+1: %d\n", *(ptr + 1)); // Output: 20
    printf("Value at ptr+2: %d\n", *(ptr + 2)); // Output: 30
} 