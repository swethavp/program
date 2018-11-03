#include<stdio.h>
main()
{
int i=0,*ip;
float f=3.4,*fp;
char c='a',*cp;
printf("i=%d\n",i);
printf("f=%f\n",f);
printf("c=%c\n",c);
ip=&i;
printf("values of i=%u\n",*ip);
printf("values of i=%d\n",*ip);
fp=&f;
printf("address of f=%u\n",fp);
printf("values of f=%f\n",*fp);
cp=&c;
printf("address of c=%u\n",cp);
printf("values of c=%c\n",*cp);
}
