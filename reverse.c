#include<stdio.h>
main()
{
typedef int number;
number n,reverse = 0,rem;

     

        printf("Enter the number\n");

        scanf("%d", &n);

        while (n> 0)

        {

            rem = n % 10;

            reverse = reverse * 10 + rem;

            n /= 10;

        }

        printf("Its reverse is = %d\n", reverse);

    }


