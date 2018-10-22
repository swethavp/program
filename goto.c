#include<stdio.h>
main()
{
int i,sum=0;
for(i=1;i<=10;i++)
{
sum+=i;
if(i==5)
goto add;
}
add:
printf("sum=%d",sum);
}

