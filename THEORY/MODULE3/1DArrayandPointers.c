/**
 * Program to Print the values in the array using pointers *(a+i) is same as a[i]
 * 
 * declare a integer array a[3] = {1,2,3}
 * declare a integer pointer variable *p;
 * store the first base address of the a into the p ie p=a
 * repeat the step until i<3 
 *            in the loop print the value of *p
 *              and increment the value of p
 * return 0
 */
#include<stdio.h>
void main()
{
    int a[3]={1,2,3};
    int *p;
    p=a;
    for(int i=0;i<3;i++)
    {
        printf("%d",*p);
        p++;
    }
}

