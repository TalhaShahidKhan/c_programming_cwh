#include<stdio.h>
int main(){
    char a ;
    scanf("%c",&a);
    switch (a)
    {
        case 'a':
        printf("Monday");
        break;
    case 'b':
        printf("Tuesday");
        break;
    case 'c':
        printf("Wednesday");
        break;
    case 'd':
        printf("Thursday");
        break;
    case 'e':
        printf("Friday");
        break;
    case 'f':
        printf("Saturday");
        break;
    case 'g':
        printf("Sunday");
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}