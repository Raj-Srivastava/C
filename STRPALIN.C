//To Check String is Palindrome
#include<stdio.h>
#include<conio.h>
void main()
{
int chkstr(char []);
int result;
char str[20];
clrscr();
result=chkstr(str);
if(result==0)
printf("string is not palindrome");
else
printf("string is palindrome");
getch();
}
int chkstr(char str[])
{
int i,j;
gets(str);
for(i=0;str[i]!='\0';i++);
i=i-1;
for(j=0;j<(i/2);j++)
{
if(str[j]!=str[i--])
{
return 0;
}
}
return 1;
}

