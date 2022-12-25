#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d
;
float x,y;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
switch(d>0)
{
case 1:
    x=-b+sqrt(b*b-4*a*c)/2*a;
    y=-b-sqrt(b*b-4*a*c)/2*a;
    printf("%f%f",x,y);
    break;
case 0: switch(d<0)
{
case 1:
    x=(-b/2*a)+sqrt(4*a*c-b*b)/2*a;
    y=(-b/2*a)-sqrt(4*a*c-b*b)/2*a;
    printf("%f%f",x,y);
    break;
case 0:
    x=-b/2*a;
    printf("%f",x);
}break;
}
}
