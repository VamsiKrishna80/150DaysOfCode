#include<stdio.h>
int main()
{
    float a = 10.5, b = 4,c;
    c = fmod(a,b);                   // modulus operator operates only for decimal values but if anyone wants for floating value thhan fmod came for floating
    printf("%f",c);
    return 0;
}

