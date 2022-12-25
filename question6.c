#include<stdio.h>
int main()
{
int n;
printf("enter the year");
scanf("%d",&n);
switch(n%100==0)
{
case 1:
    if(n%400==0)
    printf("leap year");
    else
    printf("non-leap year");
    break;
case 0:
        if(n%4==0)
        printf("leap year");
        else
        printf("non-leap year");
}
}
