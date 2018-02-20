#include<stdio.h>
#include<conio.h>
int main()
{
int h,v,c=0,i,rem;
printf(" Enter the number ");
scanf("%d",&h);
v=h;
while(v!=0)
{
rem=v%10;
c=c+rem*rem*rem;
v=v/10;
}
if(c==h)
{
printf(" the given number is Amstrong ");
}
else
{
printf(" not Amstrong ");
}
getch();
}

