#include<stdio.h>
int main()
{
int i;
printf("enter the month number");
scanf("%d",&i);
switch(i)
{

case 1:
  printf("31days");
  break;
 case 2:
  printf("29 days");
  break;
  case 3:
  printf("31days");
  break;
  case 4:
  printf("30days");
  break;
  case 5:
  printf("31days");
  break;
  case 6:
  printf("30days");
  break;
  case 7:
  printf("31days");
  break;
  case 8:
  printf("31days");
  break;
  case 9:
  printf("30days");
  break;
  case 10:
  printf("31days");
  break;
  case 11:
  printf("30 days");
  break;
  case 12:
  printf("31 days");
  break;
  default:
  printf("invalid choice");
}
}
