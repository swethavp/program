#include<stdio.h>
main()
{
  int num, sum=0,rem;
  printf("\n Enter a number: ");
  scanf("%d",&num);
  while(num>0)
  {
     rem=num%10;
     num=num/10;
     sum=sum+rem;
  }
  printf("\n sum of digits = %d",sum);
}
