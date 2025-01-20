#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    

    int random_number = rand()%100+1;
    int guess_count=0;
    int guessed;
    do
    {
        printf("Guess a number-> ");
        scanf("%d",&guessed);
        if (guessed>random_number){
            printf("Lower number please.\n");
        }
        else if (guessed<random_number) 
        {
            printf("Higher number please.\n");
        }
        else{
            printf("Congrats. \n");
        }
        guess_count++;
    } while (guessed!=random_number);

    printf("You have guessed the number.\n");
    printf("Your guess count: %d \n", guess_count);    
    return 0;

}