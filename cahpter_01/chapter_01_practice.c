#include<stdio.h>
int main(){
    float l;
    float b;
    printf("Enter the length of the rectangle\n");
    scanf("%f", &l);
    printf("Enter the breadth of the rectangle\n");
    scanf("%f", &b);
    printf("The area of the rectangle is %f\n", l*b);
    
    return 0;
}