#include<stdio.h>
int menu()
{
int n;
printf("\n1=addition\n");
printf("2=subtraction\n");
printf("3=multiplication\n");
printf("4=division\n");
printf("5=exit\n");
printf("ENTER YOUR CHOICE");
scanf("%d",&n);
return n;
}
int main()
{
    while(1)
    {
switch(menu())
{
    int a,b;

case 1:
    {
        printf("enter two number");
        scanf("%d%d",&a,&b);
    printf("%d+%d=%d",a,b,a+b);
    break;
    }
case 2:
    printf("enter two number");
        scanf("%d%d",&a,&b);
    printf("%d-%d=%d",a,b,a-b);
    break;
case 3:
    printf("enter two number");
        scanf("%d%d",&a,&b);
    printf("%d*%d=%d",a,b,a*b);
    break;
case 4:
    printf("enter two number");
        scanf("%d%d",&a,&b);
    printf("%d/%d=%d",a,b,a/b);
    break;
case 5:
    exit(0);
default: printf("invalid choice");
}
    }
}
