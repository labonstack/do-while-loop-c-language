#include <stdio.h>

/* This is an example of a do-while loop */
void main()
{
   int i;
   i = 0;
   do 
   {
     printf("the value of i is now %d\n",i);
     i = i + 1;
   } while (i < 5);
}