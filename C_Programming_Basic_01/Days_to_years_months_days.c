/*  C program to convert Total days to year, month and days  */
// https://www.youtube.com/watch?v=YiPvOZG6ZDo
#include <stdio.h>

int main()
{
    int d,y,m,nod;
    printf("Enter number of days :: ");
    scanf("%d",&nod);
    y=nod/365;
    nod=nod%365;
    m=nod/30;
    d=nod%30;
    printf("\n%d years, %d months, %d days\n",y,m,d);
    return 0;
}