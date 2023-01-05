#include<stdio.h>
#include<conio.h>
void main()
{
void swap(int *,int *);
int a,b;
clrscr();
printf("Enter value:");
scanf("%d",&a);
printf("Enter value:");
scanf("%d",&b);
printf("Before swap \na=%d\nb=%d",a,b);
swap(&a,&b);
printf("\nAfter swap \na=%d\nb=%d",a,b);
getch();
}
void swap(int *x,int *y)
{
int c;
c=*x;
*x=*y;
*y=c;
}