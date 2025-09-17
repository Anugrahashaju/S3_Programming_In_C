#include<stdio.h>

int func(int x, int y)
{
    x=20;
    y=30;
} 
void main()
{
    int x=10;
    int y=20;
    func(x,y);
    printf("The value of x: %d",x);
    printf("The value of y: %d",y);
    
}