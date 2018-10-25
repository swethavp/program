#include<stdio.h>
main()
{
int i,a[4],sum=0;
printf("enter elements\n");
for(i=0;i<4;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("sum is %d\n",sum);
}

