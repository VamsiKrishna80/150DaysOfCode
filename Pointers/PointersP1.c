#include<stdio.h>
int main()
{
    int var = 10,*p;                 //integer type Initializing a Variable and declaring pointer
    p = &var;                        //Assigning Address of var to p
    printf("%d\n",*p);               // printing *p pointer value (* deferancing)
    printf("%d\n",p);                 // printing Address of var is stored in p
    printf("%d\n",var);                // printing Var value
    printf("%d\n",&var);                // printing Address of var
    return 0;
}
