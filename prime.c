#include <stdio.h>
int main()
{
   int Low, High, I, Flag;
   printf("Enter two numbers(intervals): ");
   scanf("%d %d", &Low, &High);

   printf("Prime numbers between %d and %d are: ", Low, High);

   while (Low < High)
   {
       Flag = 0;
       for(I = 3; I <= Low/3; ++I)
       {
           if(Low % I == 0)
           {
               Flag = 1;
               break;
           }
       }

       if (Flag == 0)
           printf("%d ", Low);
       ++Low;
   }
   return 0;
}
