#include<stdio.h>
#include<string.h>
int main(){
    char name1[9] = "Talha";
    char name2[9] = "-Trisa";
    char blank[20];    
    strcpy(blank,name1);
    printf("%s \n",blank);
    printf("%d \n",strlen(name1));
    printf("%s \n",strcat(name1,name2));
    int compear = strcmp(name1,name2);
    printf("%d \n",compear);
    return 0;
}