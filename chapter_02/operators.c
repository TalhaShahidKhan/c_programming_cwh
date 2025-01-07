#include<stdio.h>
int main(){
    int a=2,b=32,c=23;
    int n = 3*a+2*b+c;
    // priority of * > + > =
    printf("%d",n);

    // operator associativity
    // left to right
    int x = 2;
    int y = 3;
    int z = 3*2/x - 8*y;
    printf("\n%d",z);
    return 0;
}