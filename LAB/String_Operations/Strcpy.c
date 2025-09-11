//Program to implement the string cpy string operations

#include<stdio.h>
#include<string.h>
void main()
{
    char str[10],str1[10];
    printf("Enter the String:");
    scanf("%s",&str);
    strcpy(str1,str);
    printf("The copied string is %s",str1);
}