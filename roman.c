#include<stdio.h>
main()
{
char romnum;
printf("enter a roman number:(I,V,X,)");
scanf("%c",&romnum);
switch(romnum)
{
case 'I':
printf("1");
break;
case 'V':
printf("5");
break;
case 'X':
printf("10");
break;
default:
printf("error");
}
}
