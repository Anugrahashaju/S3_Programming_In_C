//Program to demonstrate the array of pointers
#include<stdio.h>
//#define SIZE 10
int main()
{
    int *arr[3];
    int p = 40, q = 60, r = 90, i;
    arr[0] = &p;
    arr[1] = &q;
    arr[2] = &r;
    for(i = 0; i < 3; i++)
    {
        printf(“For the Address = %d\t the Value would be = %d\n”, arr[i], *arr[i]);
    }
    return 0;

}