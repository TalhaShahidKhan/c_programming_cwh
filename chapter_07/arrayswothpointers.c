#include<stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    printArray(numbers, 5);
    return 0;
}