#include<stdio.h>
main() 
{
int a,b,c,max;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
max=a;
if(b>max)
max=b;
if(c>max)
max=c;
printf("largest Number is %d\n",max);
}
