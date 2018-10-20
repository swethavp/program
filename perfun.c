#include <stdio.h>
int isPerfect(int num)
{
    int s,sum=0;
    for(s=1; s<num; s++)
    {
        if(num%s==0)
            sum+=s;
    }
     
    if(sum==num)
        return 1;
    else
        return 0; 
}
int main()
{
    int num,s;
    int sum;
  
    printf("Enter an integer number: ");
    scanf("%d",&num);
  
    if(isPerfect(num))
        printf("%d is a perfect number.",num);
    else
        printf("%d is not a perfect number.",num);
  
    return 0;
}
