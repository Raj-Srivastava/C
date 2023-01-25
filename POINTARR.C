#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],i,sum=0;
int *b;
clrscr();
b=arr;
for(i=0;i<10;i++)
{
printf("Enter Value:");
scanf("%d",b);
b++;
}
printf("Printing Sum:\n");
b=arr;
for(i=0;i<10;i++)
{
sum=sum+*(b+i);
}
printf("Sum =%d",sum);
getch();
}