#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    // using pointers because i already learn that 
    char *player1 = get_string("Plyaer 1:");
    char *player2 = get_string("Plyaer 2:");
    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
 //                 A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P   Q  R  S  T  U  V  W  X  Y   Z
    int scrabble1 = 0, scrabble2 = 0;

    for(int i = 0 , n = strlen(player1); i < n ; i++)
    {
        if (isalpha(player1[i]))
        {
         scrabble1 += points[toupper(player1[i]) - 'A'];
        }
    }
    for(int i = 0, m = strlen(player2); i < m; i++)
    {
        if (isalpha(player2[i]))
        {
         scrabble2 += points[toupper(player2[i]) - 'A'];
        }
    }
    if (scrabble1 > scrabble2)
    {
        printf("Player 1 wins!\n");
    }
    else if (scrabble2 > scrabble1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}