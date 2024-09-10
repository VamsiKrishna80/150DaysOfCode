/*
C program to get minimum number of bits to store an integer number.
In this C program, we will find how many minimum bit(s) are required to store an integer number?
*/
#include<stdio.h>
#include<stdint.h>
int main()
{
    while(1)
    {
    uint8_t Num,count=0;
    printf("if you dont want to enter another loop enter '0' \n");
    printf("Enter a Number that you want to print in binary value: ");
    scanf("%d",&Num);
    printf("Minimum required bits to store a Number %d is ",Num);
    for(char loop = 0; loop < 9; loop++)
    {
        if((1 << loop) & Num)
        {
            count++;
        }
    }
    printf("%d \v \v",count);
    if(Num == 0)
    {
        break;
    }
    }


}
