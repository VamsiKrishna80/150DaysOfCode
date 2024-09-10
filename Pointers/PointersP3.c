#include<stdio.h>
int main()
{
    int var  = 10;
    int *p = &var;
    printf("var value %d\n",var);
    printf("*p value %d\n",*p);
    return 0;
}
