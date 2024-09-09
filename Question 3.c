//24K-1011
#include<stdio.h>
int main(){
int salary,taxrate,finalsalary,tax;
printf("Enter the value of salary\n");
scanf("%d",&salary);
printf("Enter the value of taxrate\n");
scanf("%d",&taxrate);
tax=taxrate*salary/100;
printf("\ntax:%d",tax);
finalsalary=salary-tax;
printf("\nfinalsalary:%d",finalsalary);
return 0;
}
