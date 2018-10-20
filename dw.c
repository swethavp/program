#include<stdio.h> 
main() 
{ 
  int num, sum=0,i; 
  printf("\n Enter a number: "); 
  scanf("%d",&num);
i=0;
do
{
sum=sum+i;
i++;
} 
 while(i<=num); 
  printf("\n sum of digits = %d",sum); 
}















