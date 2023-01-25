#include<stdio.h>
#include<conio.h>
void main()
{
int a[100][100],row,col;
void transpose(int[10][10],int,int);
clrscr();
printf("Enter Row:");
scanf("%d",&row);
printf("Enter Column:");
scanf("%d",&col);
transpose(a,row,col);
getch();
}
void transpose(int a[10][10],int row,int col);
{
int i,j,temp;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("Enter value at [%d][%d]:");
scanf("%d",&a[i][j]);
}
}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(i!=j)
{
temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;
}
}
}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("Enter value at [%d][%d]:%d",a[i][j]);
}
}
}