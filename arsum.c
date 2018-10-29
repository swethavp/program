#include<stdio.h>
main()
{
int *p,sum=0,i;
int x[5]={5,9,6,7,8};
i=0;
p=x;
printf("element value address");
while(i<5)
{
printf("x[%d]%d%u\n",i,*p,p);
sum=sum+*p;
i++;
p++;
}
printf("sum=%d\n",sum);
printf("&x[0]=%u",&x[0]);
printf("p=%u\n",p);
}

