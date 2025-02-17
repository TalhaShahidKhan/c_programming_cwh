#include<stdio.h>
#include<string.h>



struct employee
{
    int id;
    char name[10];
    float salary;
};







int main(){

    struct employee e1;
    e1.id = 223;
    strcpy(e1.name,"Talha");
    e1.salary = 1000000000000;
    printf("Details of Employee:\n");
    printf("Name:%s \n",e1.name);
    printf("Salary:%f \n",e1.salary);
    printf("ID:%d \n",e1.id);


    struct employee facebook[100];  //array of sturctures

    return 0;
}