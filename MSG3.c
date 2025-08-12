#include<stdio.h>
int main()
{
printf("enter three number\n");
int a,b,c;
scanf("%d %d",&a,&b,&c);
if(a>b && a>c)
{
printf("a is greater ");
}
if (b>c)
{
printf("b is greater");
}
else
{
printf("c is greater");
}
return 0;
}
