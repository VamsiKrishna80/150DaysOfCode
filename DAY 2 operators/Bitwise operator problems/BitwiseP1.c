/*
Problem statement
Given an integer number and we have to find/print its binary value using C program.

Finding Binary number of a Decimal number
In this program, we are finding the Binary values of 16 bits numbers, the logic is very simple – we have to just traverse each bits using Bitwise AND operator. To traverse each bit – we will run loop from 15 to 0 (we are doing this to print Binary in a proper format).

Binary from Decimal (Integer) number using C program
*/
#include<stdio.h>
#include<stdint.h>
int main()
{
    while(1)
    {
    uint8_t Num;
    printf("if you dont want to enter another loop enter '0' \n");
    printf("Enter a Number that you want to print in binary value: ");
    scanf("%d",&Num);
    printf("Binary value of %d is ",Num);
    for(char loop = 7; loop>=0; loop--)
    {
        if((1 << loop) & Num)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\v \v");
    if(Num == 0)
    {
        break;
    }
    }

}
