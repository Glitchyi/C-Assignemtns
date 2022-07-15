// Using structure, read and print data of n employes. (Name Employee Id and salary)
// Language: c
#include <stdio.h>
void main(){
    int n;
    printf("Enter the number of employees\n");
    scanf("%d", &n);
    struct employee{
        char name[20];
        int id;
        float salary;
    };
    struct employee e[n];
for(int i=0; i<n; i++){
printf("Enter the name of employee %d\n", i+1);
scanf("%s", e[i].name);
printf("Enter the id of employee %d\n", i+1);
scanf("%d", &e[i].id);
printf("Enter the salary of employee %d\n", i+1);
scanf("%f", &e[i].salary);
}
for(int i=0; i<n; i++){
printf("The name of employee %d is %s\n", i+1, e[i].name);
printf("The id of employee %d is %d\n", i+1, e[i].id);
printf("The salary of employee %d is %f\n", i+1, e[i].salary);
    }
}