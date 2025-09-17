/**
 * Program to access the pointers
 */

#include<stdio.h>
int main(){

    int num = 10;
    int *ptr_to_num = &num; //Address of Operator
    
    printf("Value of num: %d\n", num); // Output: Value of num: 10
    printf("Address of num: %p\n", &num); // Output: Address of num: [some memory address]
    printf("Value stored in ptr_to_num: %p\n", ptr_to_num); // Output: Value stored in ptr_to_num: [some memory address]
    printf("Value pointed to by ptr_to_num: %d\n", *ptr_to_num); // Output: Value pointed to by ptr_to_num: 10
    // return 0; //return the values as 0
}