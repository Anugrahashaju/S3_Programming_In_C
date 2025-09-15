#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    
    // Concatenate str2 to str1
    strcat(str1, str2);//here str1 is destination 
    //str 2 is copied into the str 1
    
    printf("Concatenated string: %s\n", str1); // Output: Hello, World!
    
    return 0;
}