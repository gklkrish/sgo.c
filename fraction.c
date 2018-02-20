
#include<stdio.h>
void main()
{
   int m,n=20,i;
   printf("Enter The Number\n");
   scanf("%d",&m);
   for(i=1;i<=m;i++)
   {
   n=n*i;
   }
   printf("The FACTORIAL Of %d is %d",m,n);
   return 0;
}
