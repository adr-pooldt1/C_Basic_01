/*  C Program to calculate AREA of a rectangle  */

#include<stdio.h>
#include<conio.h>

int main()
{
  int l,b;
  int area;
  printf("Enter the length of the rectangle(in metres) :: ");
  scanf("%d",&l);
  printf("\nEnter the breadth of the rectangle(in metres) :: ");
  scanf("%d",&b);
  area=l*b;
  printf("\nThe area of a rectangle is %d metres \n",area);
return 0;
}