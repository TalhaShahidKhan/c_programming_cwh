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

    struct employee e;
    e.id = 224;
    struct employee *ptr;
    ptr = &e1;
    printf("%d",ptr->id);
    ptr = &e;
    printf("%d",ptr->id);
    return 0;
}