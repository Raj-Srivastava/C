#include<stdio.h>
#include<conio.h>
void main()
{
int result,m,n;
int ackermann(int,int)
clrscr();
printf("Enter Value of m:");
scanf("%d",&m);
printf("Enter value of n:");
scanf("%d",&n);
result=ackermann(m,n);
printf("Ackermann value of (%d,%d):%d",m,n,rsult);
printf("%d times function call itself:",i);
getch();
}
int ackermann(int m,int n)
{
static int i;
i++;
if(m==0)
return n+1;
else if(m>0&&n==0)
return ackermann(m-1,1);
else
return ackermann(m-1,ackermann(m,n-1));
}