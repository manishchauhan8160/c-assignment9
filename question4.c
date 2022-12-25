#include<stdio.h>
int main()
{
while(1)
{
int a,b,c,choice;
printf("\n1=check the isoceles triangle\n");
printf("2=check the right angle triangle \n");
printf("3=check the equilitrial triangle\n");
printf("4=exit\n");
printf("enter your choice");
scanf("%d",&choice);
if(choice!=4)
{
printf("enter the three sides of a triangle");
scanf("%d%d%d",&a,&b,&c);
}
switch(choice)
{
case 1:
     if(a==b||b==c||a==c)
     printf("it is a isosceles triangle");
     else
     printf("not an isosceles triangle");
break;
case 2:
        if(c>a&&c>b)
        {
       if(a*a+b*b==c*c)
       printf("it is a right angle triangle");
       else
       printf("not an right angle triangle");
       }
       else if(a>b&&a>c)
       {
       if(b*b+c*c==a*a)
       printf("it is a right angle triangle");
       else
       printf("no an right angletriangle");
       }
       else
       {
       if(a*a+c*c==b*b)
       printf("it is an right angle triangle");
       else
       printf("not an right angle triangle");
       }
break;
case 3:
      if(a==b&&b==c&&c==a)
      printf("it is an equilateral triangle");
      else
      printf("not an equilateral triangle");
break;
case 4:
      exit(0);
break;
default:
       printf("invalid choice");
}
}
}
