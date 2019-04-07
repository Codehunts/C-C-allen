#include<stdio.h>
#include<conio.h>

void main()
{
int a,b;
clrscr();
printf("Enter two numbers to swap\n");
scanf("%d%d",&a,&b);
printf("Before swap=\nx=%d\ny=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swap=\nx=%d\ny=%d",a,b);
getch();
}
