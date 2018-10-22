#include<stdio.h>
main()
{
int i,n,sum=0;
for(i=1;i<=10;i++)
{
printf("\nEnter a number:");
scanf("%d",&n);
if(n<0)
{
break;
}
sum=sum+n;
}
printf("\nsum=%d",sum);
}

