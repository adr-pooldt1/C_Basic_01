/*  C program to multiply two numbers using plus operator  */

#include <stdio.h>

int main()
{
    int a,b;
    int mul,i;

    printf("Enter first number:: ");
    scanf("%d",&a);
    printf("\nEnter second number:: ");
    scanf("%d",&b);

    mul=0;
    for(i=1;i<=b;i++){
        mul += a;
    }
    printf("\nMultiplication of %d and %d is: %d\n",a,b,mul);
     return 0;
}