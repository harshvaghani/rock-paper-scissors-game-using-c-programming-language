#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// int generaterandomnum()
// {
//     srand(time(NULL));
//     return ((rand() % 3) + 1);
// }
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
        printf("You selected Rock\n");
        printf("computer selected paper\n");
    }
    if (playerselect == 'r' && compselect == 's')
    {
        return 1;
        printf("You selected Rock\n");
        printf("computer selected scissors\n");
    }
    if (playerselect == 'p' && compselect == 'r')
    {
        return 1;
        printf("computer selected rock\n");
        printf("You selected Paper\n");
    }
    if (playerselect == 'p' && compselect == 's')
    {
        return -1;
        printf("You selected Paper\n");
        printf("computer selected scissors\n");
    }
    if (playerselect == 's' && compselect == 'r')
    {
        return -1;
        printf("You selected scissors\n");
        printf("computer selected rock\n");
    }
    if (playerselect == 's' && compselect == 'p')
    {
        return 1;
        printf("You selected scissors\n");
        printf("You selected Paper\n");
    }
}
int main2()
{
    char game[3] = {'r', 'p', 's'};
    char playerselect, compselect;
    int num;
    printf("enter a number\n1 for Rock\n2 for Paper\n3 for Scissors\n : ");
    scanf("%d", &num);
    playerselect = game[num - 1];
    printf("%c\n", playerselect);
    int temp = (rand() % 3) + 1;
    int playerscore = 0;
    int compscore = 0;

    compselect = game[temp - 1];
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
        printf("Compouter won\n");
    }
    else
    {
        printf("Draw\n");
    }
}
