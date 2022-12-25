#include<stdio.h>
int main()
{
int a;
printf("enter the day number of a week");
scanf("%d",&a);
switch(a)
{
case 1:
printf("good monday");
break;
case 2:
printf("good tuesday");
break;
case 3:
printf("good wednesday");
break;
case 4:
printf("good thursday");
break;
case 5:
printf("good friday");
break;
case 6:
printf("good saturday");
break;
case 7:
printf("very good sunday");
break;
default:
printf("invalid choice");
}
}
