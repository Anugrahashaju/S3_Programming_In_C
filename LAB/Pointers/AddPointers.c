#include<stdio.h>
int main()
{
    int num1,num2,sum;//
    int *ptr1, *ptr2;

    //input the first number 
    printf("Enter The First Number :");
    scanf("%d",&num1);

    //input the second number
    printf("Enter The Second Number :");
    scanf("%d",&num2);

    //Assign the address into the pointer variables
    ptr1 = &num1;
    ptr2 = &num2;

    //Add the values using the pointers
    sum = *ptr1 + *ptr2;

    printf("Sum = %d\n",sum);


    return 0;
}