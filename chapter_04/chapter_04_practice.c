#include<stdio.h>
int main(){
    int n = 0;
    printf("Enter the number you want to print the table of: ");
    scanf("%d", &n);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n",n,i, i*n);
    }
 return 0;      
}