#include <stdio.h>
int main(){
    float salary;
    printf("Enter the basic salary: ");
    scanf("%f",&salary);
    printf("Gross salary [%lf] = Basic Salary [%lf] + Dearance Allowance [%lf] + House Rent Allowance [%lf]",salary+salary*0.4+salary*0.2),salary*0.4,salary*0.2,salary;
}