#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, flag = 1;
    //Initially set the value is palindrome
    printf("Enter a string: ");
    gets(str); // read the input from the user

    length = strlen(str); //calculate the length of the string without the null value \0

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
