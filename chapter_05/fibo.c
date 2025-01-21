#include<stdio.h>

int fibonacci(int);


int fibonacci(int n){
    if (n <= 1){
        return n;
    }
    return (fibonacci(n-1)+fibonacci(n-2));
}

int main(){
    int n = 10;
    printf("The nth  %d fibonacci number is: \n",n);
    int c = fibonacci(n);
    printf("%d\n",c);
    return 0;
}