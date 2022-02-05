/*  C Program To find biggest and smallest number and positions in array  */

#include<stdio.h>

int main()
{

    int A[25], max, min, maxpos, minpos, n, i;

    printf("ENTER THE SIZE OF THE ARRAY :: ");
    scanf("%d", &n);
    printf("\nENTER %d ELEMENTS OF THE ARRAY :: \n",n);
    for(i=0; i<n; i++)
    {
     printf("\nENTER %d ELEMENT OF THE ARRAY :: ",i+1);
     scanf("%d", &A[i]);
    }
    max = A[0];
    maxpos = 0;
    for(i=0; i<n; i++)
    {
    if(max<A[i])
    {
    max = A[i];
    maxpos = i;
    }
    }
    min = A[0];
    minpos = 0;
    for(i=0; i<n; i++)
    {
    if(min>A[i])
    {
    min = A[i];
    minpos = i;
    }
    }
    printf("\nTHE LARGEST ELEMENT IS :: %d ", max);
    printf(" AND ITS POSITION IS : %d \n", maxpos+1);
    printf("\nTHE SMALlEST ELEMENT IS :: %d ", min);
    printf(" AND ITS POSITION IS :: %d \n", minpos+1);
    return 0;
}