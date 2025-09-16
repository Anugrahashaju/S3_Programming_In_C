#include<stdio.h>

void add_five(int *num_ptr) {
*num_ptr += 5; // Modifies the value at the memory address
}
int main() {
    int score = 10;
    add_five(&score);
    printf("New score: %d\n", score); // Output: New score: 15
    return 0;
}
