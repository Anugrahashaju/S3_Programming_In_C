#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr; // or int *ptr = &arr[0];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", ptr+i);
        
    }

    printf("The elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", *(ptr+i));
        
    }

    return 0;
}