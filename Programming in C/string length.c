#include <stdio.h>
#include <stdlib.h>
int string_length (char string []) ;
int main()
{
     char string1 [500] = {0};
     scanf("%s",string1);
     printf("%d",string_length (string1)) ;



}

int string_length (char string [])
{
    static int count=0;
    for (int i=0;string[i]!='\0';i++)
  {
      count++;
  }

  return count ;
}

