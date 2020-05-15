#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
int n1,n2,a;

printf("enter two numbers\n");
scanf("%d%d",&n1,&n2);

printf("Before swapping\n\tA=%d\tB=%d\n",n1,n2);

a=n1;
n1=n2;
n2=a;

printf("After swapping\n\tA=%d\tB=%d",n1,n2);

getch();
}