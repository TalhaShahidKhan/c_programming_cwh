#include<stdio.h>



// int sum(int,int);
// int sum(int a,int b){
//     a = 2;
//     return a+b;
// }


// int main(){
//     int x = 23;
//     int y = 54;
//     printf("the sum of x and y is %d",sum(x,y));
//     printf("x = %d",x);
//     return 0;
// }




int sum(int*,int*);
int sum(int* a,int* b){
    *a = 2;
    return *a+*b;
}


int main(){
    int x = 23;
    int y = 54;
    printf("the sum of x and y is %d",sum(&x,&y));
    printf("x = %d",x);
    return 0;
}