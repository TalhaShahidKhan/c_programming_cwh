#include<stdio.h>
int main(){
    FILE *file = fopen("test.txt","w");
    if (file == NULL){
        printf("ERROR!!!!!");
        return 1;
    }
    fprintf(file,"File created automatically");
    fclose(file);
    return 0;
}