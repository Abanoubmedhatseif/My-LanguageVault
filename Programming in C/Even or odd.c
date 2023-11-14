#include<stdio.h>
#include<stdlib.h>
int maintask2()
{
int no = 0;
printf("\n please enter your number to identify if even or odd \n");
scanf("%d",&no);

if (no%2==0)
    printf("Even number");
else if (no%2!=0)
    printf("Odd number");
else
    printf("zero");

}
