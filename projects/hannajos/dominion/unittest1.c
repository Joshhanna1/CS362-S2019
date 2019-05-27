#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_HAND 500
#define MAX_DECK 500

#define MAX_PLAYERS 4

#define DEBUG 0




int MineFunction(struct gameState *state,int currentPlayer,int choice1,int choice2,int handPos){
  int j = state->hand[currentPlayer][choice1];  //store card we will trash

  if (state->hand[currentPlayer][choice1] < copper || state->hand[currentPlayer][choice1] > gold)
  {
    return -1;
  }
  //ADDED BUG: changed choice2 to choice1
  if (choice1 > treasure_map || choice1 < curse)
  {
    return -1;
  }
  //ADDED BUG: changed 3 to 1 in the get cost function.
  if ( (getCost(state->hand[currentPlayer][choice1]) + 1) > getCost(choice2) )
  {
    return -1;
  }
}

int main(int argc, char const *argv[]) {

  return 0;
}
