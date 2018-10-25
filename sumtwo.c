#include <stdio.h>
int main()
{
int m1[10][10],m2[10][10],sum[10][10],i,j,a,b,c,d;
printf("enter the order of m1");
scanf("%d%d",&a,&b);
printf("enter the order of m2");
scanf("%d%d",&c,&d);
printf("Enter first matrix: \n");
for(i =0;i<a;i++)
{
for(j=0;j<b;j++)
scanf("%d",&m1[i][j]);
 }
printf("Enter second matrix: \n");
for(i=0;i<c;i++)
{
for(j=0;j<d;j++)
scanf("%d",&m2[i][j]);
}
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
sum[i][j] = m1[i][j] + m2[i][j];
}
printf("The sum of the matrix is :\n");
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
printf("%d\t",sum[i][j]);
}
}
return 0;
}


