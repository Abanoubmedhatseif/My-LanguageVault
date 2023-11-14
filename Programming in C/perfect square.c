#include <stdio.h>
#include <stdlib.h>

int main1()
{
    int in1=0;
    while(!scanf("%d",&in1)||in1<=0)
    {
        printf("Only Positive numbers are allowed");
        getchar();
    }
    long double root=sqrt(in1);
        if (root*root == in1)
            {
                 printf("\"lf\" is a perfect square",root);
            }
        else
            {
                 printf("\"lf\"  isn't a perfect square",root);

            }

}

