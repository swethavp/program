#include<stdio.h>
main()
{
 int maths,science,english,total,percentage;
 printf("\n Enter marks of 3 subjects each out of 100 ");
 printf("\n\n Maths = ");
 scanf("%d",&maths);
 printf("\n Science = ");
 scanf("%d",&science);
 printf("\n English = ");
 scanf("%d",&english);
 total=maths+science+english; 
 printf("\n Total marks = %d/300",total);
 percentage=total/3;  
 printf("\n\n Percentage = %d",percentage);
 if(percentage>=80)
 printf("\n\n Your Grade : A+");
 else if(percentage>=75)
 printf("\n\n Your Grade : A");
 else if(percentage>=60)
 printf("\n\n Your Grade : B");
 else if(percentage>=45)
 printf("\n\n Your Grade : C");
 else if(percentage>=35)
 printf("\n\n Your grade : D");
 else
 printf("\n\n You Are Failed");
}
