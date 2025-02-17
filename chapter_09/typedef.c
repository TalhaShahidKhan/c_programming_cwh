#include<stdio.h>
#include<string.h>



typedef struct employee
{
    int id;
    char name[10];
    double salary;
} Emp;







int main(){

    Emp e1;
    e1.id=11;
    strcpy(e1.name,"Talha");
    e1.salary = 2000000000000000000;
    printf("%d %s %f",e1.id,e1.name,e1.salary);
    return 0;
}