//Program to swap the two numbers using pointer through the function
#include<stdio.h>
void swap(int *num1,int *num2)
{
    int temp;
    temp = *num1;
    *num1= *num2;
    *num2 = temp;
}
int main()
{
    int number1,number2;
    printf("Enter the First Number : ");
    scanf("%d",&number1);

    printf("Enter the Second Number : ");
    scanf("%d",&number2);

    printf("Before Swapping\n................\nFirst Number : %d\nSecond Number : %d\n", number1, number2);


    

    swap(&number1,&number2);

    printf("\nAfter Swapping\n................\nFirst Number : %d\nSecond Number : %d\n", number1, number2);


}