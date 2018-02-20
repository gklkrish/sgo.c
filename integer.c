
#include <stdio.h>
void main()
{
   int p, s;

   printf("Enter an integer: ");
   scanf("%d",&p);

   for(s=1; s<=5; ++s)
   {
      printf("\n%d",p*s);
   }
}

