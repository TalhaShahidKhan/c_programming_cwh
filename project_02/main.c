#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    start:
    srand(time(0));
    int input;
    int system = rand() % 3;
    printf("Enter Your Selection (0->Rock/1->Paper/2->Seisor):\n");
    scanf("%d", &input);

    while (1)
    {
        if (input == 0 && system == 0)
        {
            printf("It's a draw!\n");
            break;
        }
        else if (input == 0 && system == 1)
        {
            printf("You Lose!\n");
            goto start;
        }
        else if (input == 0 && system == 2)
        {
            printf("You win!\n");
            goto start;
        }
        else if (input == 1 && system == 0)
        {
            printf("You Win!\n");
            goto start;
        }
        else if (input == 1 && system == 1)
        {
            printf("It's a Draw!\n");
            break;
        }
        else if (input == 1 && system == 2)
        {
            printf("You Lose!\n");
            goto start;
        }
        else if (input == 2 && system == 0)
        {
            printf("You Lose!\n");
            goto start;
        }

        else if (input == 2 && system == 1)
        {
            printf("You Win!\n");
            goto start;
        }
        else if (input == 2 && system == 2)
        {
            printf("It's Draw!\n");
            break;
        }
        else{
            printf("Invalid Input!!\n");
            goto start;
        }
    }
    return 0;
}