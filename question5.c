#include<stdio.h>
int main()
{
int var;
printf("enter the value from 1 to 3\n");
scanf("%d",&var);
switch(var)
{
case 1:
 printf("good");
 break;
case 2:
printf("better");
break;
case 3:
printf("best");
break;
default:
 printf("invalid choice");
 }
}
