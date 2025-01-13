// #include<stdio.h>
// int main(){
//     int n ;
//     printf("Enter the number you want to find the factorial of: ");
//     scanf("%d", &n);
//     for (int i = n-1; i > 0; i--)
//     {
//         n = n * i;
//     }
//     printf("The factorial of the number is: %d\n", n);
// return 0;
// }

#include <stdio.h>
int main()
{
    unsigned long long n, result = 1;
    printf("Enter a non-negative number: ");
    scanf("%llu", &n);
    if (n == 0)
    {
        result = 1;
    }
    else
    {
        for (unsigned long long i = n; i > 0; i--)
        {
            result *= i;
        }
    }
    printf("The factorial of %llu is: %llu\n", n, result);
    return 0;
}