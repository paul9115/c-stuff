#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
    TODO:
        Craps:
            A player rolls two 6 sided dice, the sum is then calculated.
            if the sum is 7 or 11 on the first roll the player wins 
            if the sum is 2, 3 or 12 the player looses (craps)
            else the sum becomes the 'point'
            the player then continues to roll until they 'make their point' 
            if the player rolls a 7 before doing so, they loose  
*/

enum Status {CONTINUE, WIN, LOOSE};

int rollDice(void);

int main(void){
  int sum, myPoint;
  enum Status gameStatus;
  srand(time(NULL));

  sum = rollDice();
  if (sum == 7 || sum == 11) {
    gameStatus = WIN;
    } else if (sum == 2 || sum == 3 || sum == 12) {
        gameStatus = LOOSE;
    } else {
      myPoint = sum;
      printf("%s%d\n", "Point is: ", myPoint);
      gameStatus = CONTINUE;
    }
    while (gameStatus == CONTINUE) {
        sum = rollDice();
        if(sum == 7){
            gameStatus = LOOSE;
        } else {
          if (sum == myPoint) {
            gameStatus = WIN;
          }
        }
    }
    if(gameStatus == WIN){
        printf("%s\n", "Player wins!");
    } else {
        printf("%s\n", "Player looses!");
    }
}

int rollDice(void){
    int die1, die2, workSum;
    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;
    workSum = die1 + die2;
    printf("%s%d%s%d%s%d\n", "Player rolled ", die1, " + ", die2, " = ", workSum);
    return workSum;
}