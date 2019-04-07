#include<conio.h>
#include<stdio.h>

main()
{
clrscr();
float num1,num2,result;
char op;

printf("Enter the first number:");
scanf("%f",&num1);

printf("Enter the operation:\n");
scanf(" %c",&op);

printf("Enter the second number:");
scanf("%f",&num2);

switch(op)
{
case '-':
result=num1-num2;
printf("%f",result);
break;

case '+':
result=num1+num2;
printf("%f",result);
break;

case '/':
result=num1/num2;
printf("%f",result);
break;

case '*':
result=num1*num2;
printf("%f",result);
break;
}
getch();
}
