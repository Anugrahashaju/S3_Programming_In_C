#include <stdio.h>

//function to implement the string copy
void stringCopy(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // terminate the copied string
}

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    gets(str1);

    stringCopy(str1, str2);

    printf("Copied string: %s\n", str2);
    return 0;
}
