#include<stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("size of a is %d Bytes\n",sizeof(a));
    printf("Address = %d, value = %d\n",p,*p);
    printf("Address = %d, value = %d\n",p+1,*(p+1));
    char *p0;
    p0 = (char*)p; //typecastinf
    printf("size of char is %d bytes\n",sizeof(*p0));
    printf("Address = %d, value = %d\n",p0,*p0);
    // 1025 = 0000 0000  0000 0000  0000 0100 0000 0001
}
