#include<stdio.h>
main()
{
int a,b,c;
printf("enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is largest");
}
else
{
if(b>a&&b>c)
{
printf("b is largest");
}
else
{
printf("c is largest");
}
}
}
