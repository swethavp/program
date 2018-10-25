#include<stdio.h>
main()
{
int a[5],i,min,max;
printf("enter the elements:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
{
min=a[0];
max=a[0];
}}
for(i=1;i<5;i++)
{
if(min>a[i])
min=a[i];
if(max<a[i])
max=a[i];
}
printf("min=%d max=%d",min,max);
}

