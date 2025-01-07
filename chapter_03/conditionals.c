#include<stdio.h>
int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if (0){
        printf("This will not be printed\n");
    }
    if ('c'){
        printf  ("This will be printed\n");
    }
    if(age>=18){
        printf("You can vote\n");
    }
    else{
        printf("You cannot vote\n");
    }
    // any non zero is true
    return 0;
}