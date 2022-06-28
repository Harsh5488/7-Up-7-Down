/*A fun game having the concept of random numbers or guessing the numbers*/

#include <stdio.h>                                  //for standard input/output
#include <conio.h>                                  //for _getch() function
#include <stdlib.h>                                 //for function like rand() and system()

int main()
{
    int dice1, dice2, sum, point=0;
    char guess;

    while( guess != 'b' )
    {
        system("cls");                              //Clearing the screen at the beginning and after every iteration
        printf("\n\t\t\t");

        printf("Welcome!");

        printf("\n\n\n\t\t     ");

        printf("7 UP or 7 DOWN");

        printf("\n\n");
        printf("\n\n\t");

        printf("You have to guess the sum of numbers on two dices after a roll!");

        printf("\n\n");
        printf("\t\t\t ");                          //Instructions

        printf("U = For digit 7 up");

        printf("\n");
        printf("\t\t\t ");

        printf("D = For digit 7 down");

        printf("\n");
        printf("\t\t\t ");

        printf("S = For digit exactly 7");

        printf("\n");
        printf("\n\n");

        printf("\tPoint -> %d", point);             //Displaying the point earned by the user
        printf("\n\tNow, what's your guess! ---->  ");
        scanf(" %c", &guess);

        if (guess == 'b' || guess == 'B')
        {
            printf("\n\t\t Exiting...");
            break;
        }

        dice1 = ( rand()%6 ) + 1;
        dice2 = ( rand()%6 ) + 1;
        sum = dice1 + dice2;

        printf("\n\n\n\tRolling........................................!\n");//Rolling the dice...fun purpose
        printf("\n\t\t\tThe number is %d \n", sum);
        printf("\n\t\t\t   ");

        if( guess =='u' || guess == 'U')            //if the user guess for 7 Up
        {
            if ( sum>7 ){
                printf("You Win!\n\n");
                point++;
            }
            else if ( sum==7 ){
                printf("You Lose!\n\n");
                point--;
            }
            else if ( sum<7 ){
                printf("You Lose!\n\n");
                point--;
            }
        }
        else if ( guess == 's' || guess == 'S')     // if the user guess for 7 itself
        {
            if ( sum>7 ){
                printf("You Lose!\n\n");
                point--;
            }
            else if ( sum==7 ){
                printf("You Win!\n\n");
                point++;
            }
            else if ( sum<7 ){
                printf("You Lose!\n\n");
                point--;
            }
        }
        else if ( guess == 'd' || guess == 'D')     // if the user guess for 7 Down
        {
            if ( sum>7 ){
                printf("You Lose!\n\n");
                point--;
            }
            else if ( sum==7 ){
                printf("You Lose!\n\n");
                point--;
            }
            else if ( sum<7 ){
                printf("You Win!\n\n");
                point++;
            }
        }
        printf("\n\t\tPress any key continue...");
        _getch();                                   //to show up the result
    }

    return 0;
}
