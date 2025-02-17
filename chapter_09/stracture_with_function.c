#include<stdio.h>
#include<string.h>



struct employee
{
    int id;
    char name[10];
    float salary;
};


void show_details(struct employee e);
void show_details(struct employee e){
    printf("Name:%s, ID:%d, Salary:%f",e.name,e.id,e.salary);
}





int main(){

    struct employee e1;
    strcpy(e1.name,"Tlaha");
    e1.id = 223;
    e1.salary = 1000000000000000000;
    show_details(e1);

    return 0;
}