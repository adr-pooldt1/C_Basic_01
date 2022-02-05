/*  C Program to Print integer value in Decimal, Octal, Hexadecimal using printf  */

#include <stdio.h>

int main()
{
    int value=3412;

    printf("Decimal value is: %d\n",value);
    printf("\nOctal value is: %o\n",value);
    printf("\nHexadecimal value is (Alphabet in small letters): %x\n",value);
    printf("\nHexadecimal value is (Alphabet in capital letters): %X\n",value);

    return 0;
}