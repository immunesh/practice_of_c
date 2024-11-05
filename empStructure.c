#include<stdio.h>
#include<stdlib.h>

struct employee {
    char name[30];
    char date[15];
    float salary;
};

int main(){
    struct employee emp  = {"Mike", "7/16/15",76909.00f};
    printf("\n Name: %s", emp.name);
    printf("\n Date: %s", emp.date);
    printf("\n Salary: %.2f", emp.salary);

    printf("\n Enter employee Information: \n");

    printf(" Name: ");
    scanf("%s", emp.name);

    printf("\n Date: ");
    scanf("%s", emp.date);


    printf("\n Salary: ");
    scanf("%f", &emp.salary);

    printf("\n Name: %s", emp.name);
    printf("\n Date: %s", emp.date);
    printf("\n Salary: %.2f", emp.salary);

    return 0;

    
}