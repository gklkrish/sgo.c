#include<stdio.h>
int main()
{
int num,rem,result=1;
scanf("%d",&num);
while(num!=1)
{
rem=num%10;
result=result+rem*rem*rem;
num=num/10;
}
if(result==num)
printf("Amstrong");
else
printf("not Armstrong num");
return 1;
}
