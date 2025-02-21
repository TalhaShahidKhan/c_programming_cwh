#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *array;
    printf("Enter a number for the array\n");
    scanf("%d",&n);
    // array = (int*)malloc(n*sizeof(int));
    array = (int*)calloc(n,sizeof(int));
    printf("Now Enter Numbers in the array\n");
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d",&num);
        array[i]=num;
    }
    printf("Your array1:\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d ",array[j]);
    }
    
    float *array2 = (float*)realloc(array,n*sizeof(float));
    
    printf("\nNow Enter Float Numbers in the array2\n");
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%f",&num);
        array2[i]=num;
    }
    printf("Your array:\n");
    for (int j = 0; j < n; j++)
    {
        printf("%.2f ",array2[j]);
    }
    free(array2);
    return 0;
}