/* C Program to Accept ten numbers and display sum of even and product of odd numbers */

#include<stdio.h>

int main()
{
  int n,sum=0,mul=1,i;
  printf("Enter 10 numbers :: \n");
  for(i=0;i<10;i++)
  {
      printf("\nEnter %d number :: ",i+1);
        scanf("%d",&n);
      if(n%2==0)
        sum=sum+n;
      else
        mul=mul*n;
  }
  printf("\nThe sum of even numbers is : %d \n",sum);
  printf("\nThe multiplication of odd numbers is : %d\n",mul);
return 0;
}