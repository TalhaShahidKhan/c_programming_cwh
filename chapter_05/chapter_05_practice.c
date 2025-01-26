#include<stdio.h>

float avg(int,int,int);


float avg(int n1, int n2, int n3){
    return (n1+n2+n3)/3.0;
}



float c2f(float);
float c2f(float c){
    return ((9.0*c)/5.0)+32.0;
}



int sum_natural(int);
int sum_natural(int n){
    if (n == 1)
    {
        return 1;
    }
    return n + sum_natural(n-1);
    
}



char pattern(int);
char pattern(int n){
    if (n==0)
    {
        printf("not accepted");
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}




int main(){
    printf("%f\n",avg(1,2,3));
    printf("%d\n",sum_natural(4));
    printf("%f\n",c2f(36.0));
    pattern(3);
    return 0;
}