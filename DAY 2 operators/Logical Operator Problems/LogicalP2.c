
#include <stdio.h>
void convert(char *y);
int main()
{
char x[10];
scanf("%s",x);
convert(x);
return 0;
}
void convert(char *y)
{
    int temp = 48;
while(*y!=0)
{
*y=*y-48;
//temp=*y;
printf("%c\n",temp);
y++;
}
}
