#include<stdio.h>


void write_table(FILE *file,int num){
    for (int i = 0; i < 10; i++)
    {
        fprintf(file,"%dx%d=%d\n",num,(i+1),num*(i+1));
    }
    fprintf(file,"\n\n");
    
}



int main(){
    FILE *file = fopen("table.txt","a");
    for (int i = 0; i < 9; i++)
    {
        write_table(file,(i+1));
    }
    



    return 0;
}