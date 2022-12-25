#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
switch(n<0)
{
case 0:
    n=-n;
    printf("%d",n);
    break;
 case 1:
 n=-(n);
 printf("%d",n);
 break;
}
}
