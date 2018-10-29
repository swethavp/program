#include<stdio.h>
main()
{
int a[10][10],m,n,i,j;
printf("enter the order of the matrix a\n");
scanf("%d%d",&m,&n);
printf("enter the elements of matrix a of order %d*%d\n",m,n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",*(a+i)+j);
printf("matrix a is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%4d",*(*(a+i)+j));
}
printf("\n");
}
}

