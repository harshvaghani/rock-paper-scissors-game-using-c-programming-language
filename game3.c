#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
// int generaterandomnum()
// {
//     srand(time(NULL));
//     return ((rand() % 3) + 1);
// }
int charselect(char playerselect, char compselect);
int main()
{
    while (1)
    {
        char game[3] = {'r', 'p', 's'};
        char playerselect, compselect;
        int num;
        printf("enter a number\n1 for Rock\n2 for Paper\n3 for Scissors\n: ");
        scanf("%d", &num);
        playerselect = game[num - 1];
        if (playerselect == 'r')
        {
            printf("You selected rock\n");
        }

        else if (playerselect == 'p')
        {
            printf("You selected paper\n");
        }

        else if (playerselect == 's')
        {
            printf("You selected scissors\n");
        }

        int temp = (rand() % 3) + 1;
        int playerscore = 0;
        int compscore = 0;

        compselect = game[temp - 1];
        if (compselect == 'r')
        {
            printf("Computer selected rock\n");
        }

        else if (compselect == 'p')
        {
            printf("Computer selected paper\n");
        }

        else if (compselect == 's')
        {
            printf("Computer selected scissors\n");
        }

        charselect(playerselect, compselect);
        if (charselect(playerselect, compselect) == 0)
        {
            compscore = 0;
            playerscore = 0;
            charselect(playerselect, compselect);
        }
        else if (charselect(playerselect, compselect) == 1)
        {
            playerscore = 1;
            charselect(playerselect, compselect);
        }
        else if (charselect(playerselect, compselect) == -1)
        {
            compscore = 1;
            charselect(playerselect, compselect);
        }
        printf("Your score : %d\n", playerscore);
        printf("CPU's score : %d\n", compscore);
        if (playerscore == 1)
        {
            printf("You won\n");
        }
        else if (compscore == 1)
        {
            printf("COMPUTER won\n");
        }
        else
        {
            printf("DRAW\n");
        }
    }
}
int charselect(char playerselect, char compselect)
{
    if (playerselect == compselect)
    {
        return 0;
        printf("Draw\n");
    }

    if (playerselect == 'r' && compselect == 'p') //if both true then and then we get into this condition otherwise we can't
    {
        return -1;
    }
    if (playerselect == 'r' && compselect == 's')
    {
        return 1;
    }
    if (playerselect == 'p' && compselect == 'r')
    {
        return 1;
    }
    if (playerselect == 'p' && compselect == 's')
    {
        return -1;
    }
    if (playerselect == 's' && compselect == 'r')
    {
        return -1;
    }
    if (playerselect == 's' && compselect == 'p')
    {
        return 1;
    }
}
