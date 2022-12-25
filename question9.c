#include<stdio.h>
int main()
{
int n;
printf("enter the even number");
scanf("%d",&n);
switch(n%2==0)
{
case 1:
n=n+1;
printf("upper odd number is %d",n);
break;
case 0:
printf("invalid choice");
break;
}
}
