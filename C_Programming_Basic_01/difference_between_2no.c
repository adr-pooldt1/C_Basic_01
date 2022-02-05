/*  C program to calculate difference of two numbers  */

#include <stdio.h>

int main()
{

    int a,b;
    int diff;

    printf("Enter first number :: ");
    scanf("%d",&a);
    printf("\nEnter second number :: ");
    scanf("%d",&b);

    // check condition to identify which is largest number
    if( a>b )
        diff=a-b;
    else
        diff=b-a;

    printf("\nDifference between %d and %d is = %d\n",a,b,diff);
    return 0;
}