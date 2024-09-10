#include<stdio.h>
int main()
{
    int var = 124;
    int *ptr = &var;
    // Pointer Arithmetic
    printf("Address ptr is %d\n",ptr);                 // for ex ptr = 12443;
    printf("size of integer is %d\n ",sizeof(var));
    printf("Address p+1 %d\n",ptr+1);   // ptr = 12447
    printf("value  p+1 %d\n",*(ptr+1));
    return 0;
}
