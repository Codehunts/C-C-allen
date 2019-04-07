#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[20];
clrscr();
printf("Enter number of element:\n");
scanf("%d",&n);
printf("Enter %d element in array:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Number in reverse:\n");
for(i=n-1;i>=0;i--)
{
printf("%d\n",a[i]);
}
getch();

}