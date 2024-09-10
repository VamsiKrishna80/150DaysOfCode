/*
Logical operator

&&       ->    GIVES TRUE OR FALSE if A = 1 and B = 1 gives 1 but if any variable having 0 then  logical and operator gives 0

||       ->     GIVES TRUE OR FALSE if A = 1 or B = 1 gives 1 but both variables having 0 then logical and operator gives 0

!        ->     it gives true or flase only but when A is 1 it gives 0 or A = 0 it gives 1
*/

// Largest of three numbers without if condition
#include<stdio.h>
#include<stdint.h>
int main()
{
    int16_t a = 11,b=10,c=9,d=0,e=0,f=0,lar=0;
   //printf("Enter Numbers for a b c :\n");
   // scanf("%d%d%d",&a,&b,&c);
    d = (a>b) && (a>c);
    e = (b>a) && (b>c);
    f = (c>a) && (c>b);
    lar = d*a + e*b +f*c;
    printf("Largest number amoung three number is %d\n d is %d, e is %d, f is %d",lar,d,e,f);
    return 0;
}
