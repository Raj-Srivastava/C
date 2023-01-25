#include<stdio.h>
#include<conio.h>
struct employee
{
int empid;
char ename[30];
long int salary;
};
void main()
{
int i;
long long int totalsalary=0,dsal;
struct employee e[10];
clrscr();
for(i=0;i<3;i++)
{
printf("Enter Employee ID:");
scanf("%d",&e[i].empid);
printf("Enter Employee Name:");
scanf("%s",&e[i].ename);
printf("Enter Salary:");
scanf("%d",&e[i].salary);
}
for(i=0;i<3;i++)
{
totalsalary+=e[i].salary;
}
printf("\nS.No.\tEmployee ID\tEmployee Name\tEmployee Salary\n");
printf("--------------------------------------------------------------------\n");
for(i=0;i<3;i++)
{
printf("%d\t%5d\t\t%9s\t\t%6d\n",i,e[i].empid,e[i].ename,e[i].salary);
}
dsal=e[0].salary;
for(i=1;i<3;i++)
{
if(dsal<e[i].salary)
{
dsal=e[i].salary;
}
}
printf("Highest Salary of employee is:\n");
for(i=0;i<3;i++)
{
if(dsal==e[i].salary)
{
printf("Employee Name: %s\t\n",e[i].ename);
}
}
printf("Total Salary=%d\n",totalsalary);
printf("Enter your desired salary you want to search:");
scanf("%d",&dsal);
for(i=0;i<3;i++)
{
if(dsal==e[i].salary)
{
printf("Entered salary is in the list and name is %s",e[i].ename);
break;
}
}
if(i==3)
{
printf("Entered Salary is not in the list");
}
getch();
}