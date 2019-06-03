#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//testing numHandCards(struct gameState *state)
int main(){
	struct gameState* unitTest = malloc(sizeof(struct gameState)); //create game struct
	int wantedValue, value;

	unitTest->whoseTurn = 0;
	unitTest->handCount[0] = 4;
	wantedValue = 4;
	value= numHandCards(unitTest);

			if(value == wantedValue){//compare expected and returned value
			printf( "TEST PASSED: Values matched. Expected value: %d   numHandCards function return value: %d\n",wantedValue,value);
		}else{
			printf( "TEST FAILED: Values do not match.Expected value: %d   numHandCards function return value: %d\n",wantedValue,value);
		}

	free(unitTest);
	return 0;
}
