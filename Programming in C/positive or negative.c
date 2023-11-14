#include<stdio.h>
#include<stdlib.h>
int maintask1()
{
int number = 0;
printf("please enter your number to know positive or negative\n");
if (!scanf("%d",&number))
    {
        if (number>0)
        printf("the number is positive");
    else if (number<0)
        printf("the number is negative");
    else
        printf("Zero");
    }
else
    {
        printf("Invalid input");
    }
}
