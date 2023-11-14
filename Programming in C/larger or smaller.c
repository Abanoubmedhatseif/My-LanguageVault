#include<stdio.h>
#include<stdlib.h>
int main()
{

 printf("\n Grading test");
    printf("\nEktb drgtk ya taleb\n");

    int grade=0 ;
    scanf("%d",&grade);

    if(grade<60&&grade>0)
        printf("Corrective zaaaakr 3dl");
    else if(grade>=60&&grade<85)
        printf("Your grade is Good");
    else if (grade>=85&&grade<=100)
        printf("Your grade is gamed");
    else
        printf("Grades bet. 0-100 only");

}
