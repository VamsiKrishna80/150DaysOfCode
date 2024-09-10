#include<stdio.h>
int main()
{
    int a , b = 20;
    int *p;
    a = 10;
    p = &a;
    printf(" before a value %d :\n",a);
    *p = b;
    printf("After a value %d :\n",a);
    return 0;
}
