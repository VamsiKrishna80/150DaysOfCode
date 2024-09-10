#include<stdio.h>
int main()
{
    int x =5;
    int *p;
    p = &x;
    int **q = &p;
    int ***r = &q;
    printf("Value of x is %d\n",x);
    printf("Address of &x is %d\n\n",&x);

     printf("Value of *P is %d\n",*p);
     printf("Value of P is %d\n",p);
    printf("Address of &p is %d\n\n",&p);


     printf("Value of **q is %d\n",**q);
     printf("Value of *q is %d\n",*q);
     printf("Value of q is %d\n",q);
    printf("Address of &q is %d\n\n",&q);

     printf("Value of ***r is %d\n",***r);
    printf("Value of **r is %d\n",**r);
     printf("Value of *r is %d\n",*r);
     printf("Value of r is %d\n",r);
    printf("Address of &r is %d\n\n",&r);
    return 0;


}
