#include<stdio.h>



int findMax(int*,int);
int findMax(int arr[],int size){
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
    

}

int findMin(int*,int);
int findMin(int arr[],int size){
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
    

}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int *ptr = &arr[5];
    int arr2[6];
    for (int i = 0; i < 6; i++)
    {
        arr2[i] = *(ptr-i);
    }
    printf("New Reversed Array: \n");
    for (int j = 0; j < 6; j++)
    {
        printf("%d ",arr2[j]);
    }
    printf("\nThe maximum valur of the frist array is %d:", findMax(arr,6));
    printf("\nThe maximum valur of the frist array is %d:", findMin(arr,6));




    int matrix1[3][2] = {{1,2},{2,3},{3,4}};
    int matrix2[3][2] = {{54,65},{34,34},{33,43}};

    printf("\nMatrix addition result\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",(matrix1[i][j])+(matrix2[i][j]));
        }
        printf("\n");
    }
    





    return 0;
}