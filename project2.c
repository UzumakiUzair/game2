#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char user_input, comp_input;
    printf("\n");
    printf("*****************\n");
    printf("\n");
    printf("Rock Paper Sissor\n");
    printf("\n");
    printf("*****************\n");
    printf("\n");

    // Randomly generating numbers from 1 to 3
    srand(time(0));
    int num = rand() % 3 + 1;

    if (num == 1)
    {
        comp_input = 'R';
    }
    else if (num == 2)
    {
        comp_input = 'P';
    }
    else if (num == 3)
    {
        comp_input = 'S';
    }

    // Taking user input
    printf("Enter R for Rock or P for Paper or S for Scissor : ");
    scanf("%c", &user_input);

    if (user_input != 'R' && user_input != 'P' && user_input != 'S')
    {
        printf("Invalid input detected\n");
        printf("Exiting Game");
    }
    else if (comp_input == user_input)
    {
        printf("It's a tie !");
    }
    else if ((comp_input == 'R' && user_input == 'P') || (comp_input == 'P' && user_input == 'S') || (comp_input == 'S' && user_input == 'R'))
    {
        printf("Computer input is %c\n", comp_input);
        printf("You Win !");
    }
    else
    {
        printf("Computer input is %c\n", comp_input);
        printf("You Lose !");
    }

    return 0;
}