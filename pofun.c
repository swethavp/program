#include<stdio.h>
int sum(int,int);
main()
{
int a,b,s,(*fnp)(int,int);
printf("enter two number",&a,&b);
printf("a=%d b=%d",a,b);
fnp=sum;
s=(*fnp)(a,b);
printf("sum=%d",s);
}
int sum(int a,int b)
{
int s;
s=a+b;
return s;
}

