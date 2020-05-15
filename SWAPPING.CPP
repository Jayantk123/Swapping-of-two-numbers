#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int a,b;

printf("enter two numbers\n");
scanf("%d%d",&a,&b);

printf("Before swapping\n\tA=%d\tB=%d\n",a,b);

a=a+b;
b=a-b;
a=a-b;

printf("After swapping\n\tA=%d\tB=%d",a,b);

getch();
}