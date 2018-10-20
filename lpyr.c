#include<stdio.h>
main()
{
int n;
printf("Enter the year:");
scanf("%d",&n);
if(n%4==0)
{
printf("this is a leap year");
}
else
{
printf("this is not a leap year");
}
}
