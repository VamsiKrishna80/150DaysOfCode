//This is structure of c program
/*
Some of the C Header files:

stddef.h – Defines several useful types and macros.
stdint.h – Defines exact width integer types.
stdio.h – Defines core input and output functions
stdlib.h – Defines numeric conversion functions, pseudo-random number generator, and memory allocation
string.h – Defines string handling functions
math.h – Defines common mathematical functions.
*/
#include<stdio.h>                      //Adding Header file for input/output functions to take input / displaying content
#include<stdint.h>                     //Adding Header file for using standard data types like int8_t = 8bits etc.....
int main()                             //This is the main main function to execute program
{
    int8_t Num = 23;                   //Initializing a variable with value
    printf("Hello world\n");           //Printing " Hello world " in console application
    printf("Number is %d",Num);        // printing a value of variable
    return 0;                          // Returning a value 0
}

