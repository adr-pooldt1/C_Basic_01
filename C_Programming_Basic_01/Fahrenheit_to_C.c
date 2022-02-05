/*  C program to convert temperature from Fahrenheit to Celsius and vice versa  */

#include <stdio.h>

int main()
{

    float fh,cl;
    int choice;

    printf("\n1: Convert temperature from Fahrenheit to Celsius.");
    printf("\n2: Convert temperature from Celsius to Fahrenheit.\n");
    printf("\nEnter your choice (1, 2): ");
    scanf("%d",&choice);

    if(choice ==1){
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fh);
        cl= (fh - 32) / 1.8;
        printf("\nTemperature in Celsius: %.2f",cl);
    }
    else if(choice==2){
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&cl);
        fh= (cl*1.8)+32;
        printf("\nTemperature in Fahrenheit: %.2f",fh);
    }
    else{
        printf("\nInvalid Choice !!!");
    }
    return 0;
}