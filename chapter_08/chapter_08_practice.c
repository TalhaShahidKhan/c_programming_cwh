#include<stdio.h>
// #include<string.h>

int mystrlen(char str[]){
    int count;
    int i = 0;
    int c = str[i];
    while (c!='\0')
    {
        c = str[i];
        i++;
    }
    count = i-1;
    return count;
    
}



char* sclice(char str[],int m, int n){
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    str = ptr1;
    str[n]= '\0';
    return str;
}


int main(){
    char name[20] = "Talha-Trisa";
    printf("%d\n",mystrlen(name));
    printf("%s\n",sclice(name,6,10));
    return 0;

}
