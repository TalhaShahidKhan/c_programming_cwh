#include<stdio.h>

int sum(int a, int b) {
    return a + b;
}
int main() {
    int a = 5, b = 10;
    int c = sum(a, b);
    printf("The sum of %d and %d is %d\n", a, b, c);
    return 0;
}