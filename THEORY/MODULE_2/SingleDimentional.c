//Single Dimentional Array to find the sum and average of the elements
#include<stdio.h>
void main()
{
    printf("Enter the 5 integers\n");
    int arr[5];  //declare an array to store the elements
    int sum=0;//to calculate the sum of the elements
    for(int i=0;i<5;i++)
    {
        printf("Enter the integer %d",i+1);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    float average = sum/5;
    printf("\nSum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);

}