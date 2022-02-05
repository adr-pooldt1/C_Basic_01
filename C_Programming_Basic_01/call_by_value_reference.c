/*  Call by value

#include<stdio.h>
void value(int x, int y);
int main( )
{
        int a=5, b=8;
        printf("Before calling the function, a = %d and b = %d\n", a, b);
        value(a, b);
        printf("After calling the function, a = %d and b = %d\n", a, b);

    return 0;
}
void value(int x, int y)
{
        x++;
        y++;
        printf("Inside function x = %d , y = %d\n",x,y);
}*/
/* Call by reference*/

#include<stdio.h>
void ref(int *p, int *q);
int main()
{
        int a = 5;
        int b = 8;
        printf("Before calling the function, a = %d and b = %d\n", a, b);
        ref(&a, &b);
        printf("After calling the function, a = %d and b = %d\n", a, b);
        
        return 0;
}
void ref(int *p, int *q)
{
        (*p)++;
        (*q)++;
        printf("Inside function *p = %d, *q = %d\n", *p, *q);
}