#include<stdio.h>

void swap(int*,int*);
void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 1;
    int b = 2;
    swap(&a,&b);
    printf("%d %d",a,b);
}