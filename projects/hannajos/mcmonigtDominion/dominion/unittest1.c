#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//testing the function int whoseTurn()

int main(){
	//holds the game struct
	struct gameState* unitTest = malloc(sizeof(struct gameState));
	//holds the expected value that wants to get returned and the index
	int wantedValue, index = 0, i;

	//tells the players whos turn it is and intializes wantedValue to zero
	unitTest->whoseTurn = 0;
	wantedValue=0;

	for(i = 0; i < MAX_PLAYERS ; i++ ){

		unitTest->whoseTurn = i; //set player number in game struct
		wantedValue = i;   //set expected player value whoseTurn should return
		index = whoseTurn(unitTest);// find whos turn

		if(index == wantedValue){//compare expected and returned value
			printf( "TEST PASSED: Values matched. Expected value: %d   whoseTurn function return value: %d\n",wantedValue,index);
		}else{
			printf( "TEST FAILED: Values do not match. Expected value: %d  whoseTurn function return value: %d\n",wantedValue,index);
		}
	}

free(unitTest);
	return 0;
}
