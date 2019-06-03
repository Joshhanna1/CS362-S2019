#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//testing updateCoins


int main(){

	int player = 0;
	struct gameState* unitTest = malloc(sizeof(struct gameState));
	int bonus, i = 0, totalCards=0, wantedValue=0;




	// Use this to see if there are 4 cards in this
	totalCards = 3;
	unitTest->handCount[0] = totalCards; //4 cards
	unitTest->coins = 0;
	bonus = 0;
	wantedValue = 3;
	//go through total cards
	for(i=0;i<totalCards;i++){
		unitTest->hand[player][i]=copper;
	}
	//update the coins for the players
	updateCoins(player, unitTest,bonus);
	//see if the test passes or not
	if(wantedValue==unitTest->coins){
		printf( "TEST PASSED: Values matched. Expected value: %d   updateCoins function return total: %d\n",wantedValue,unitTest->coins);
	}else{
		printf( "TEST Failed: Values do not matched. Expected value: %d   updateCoins function return total: %d\n",wantedValue,unitTest->coins);
	}



	//total is 8
	totalCards = 9 ;
	unitTest->handCount[0] = totalCards; //4 cards
	unitTest->coins = 0;
	bonus = 0;
	wantedValue = 9;
	//go through total cards
	for(i=0;i<totalCards;i++){
		unitTest->hand[player][i]=copper;
	}
	//update the coins for the players
	updateCoins(player, unitTest,bonus);
	//see if the test passes or not
	if(wantedValue==unitTest->coins){
		printf( "TEST PASSED: Values matched. Expected value: %d   updateCoins function return total: %d\n",wantedValue,unitTest->coins);
	}else{
		printf( "TEST Failed: Values do not matched. Expected value: %d   updateCoins function return total: %d\n",wantedValue,unitTest->coins);
	}



	//total is 12
	totalCards = 13 ;
	unitTest->handCount[0] = totalCards; //4 cards
	unitTest->coins = 0;
	bonus = 0;
	wantedValue = 13;
	//go through total cards
	for(i=0;i<totalCards;i++){
		unitTest->hand[player][i]=copper;
	}
	//update the coins for the players
	updateCoins(player, unitTest,bonus);
	//see if the test passes or not
	if(wantedValue==unitTest->coins){
		printf( "TEST PASSED: Values matched. Expected value: %d   updateCoins function return total: %d\n",wantedValue,unitTest->coins);
	}else{
		printf( "TEST Failed: Values do not matched. Expected value: %d   updateCoins function return total: %d\n",wantedValue,unitTest->coins);
	}



	//total is 14
	totalCards =  16;
	unitTest->handCount[0] = totalCards; //4 cards
	unitTest->coins = 0;
	bonus = 0;
	wantedValue = 16;
	//go through total cards
	for(i=0;i<totalCards;i++){
		unitTest->hand[player][i]=copper;
	}
	//update the coins for the players
	updateCoins(player, unitTest,bonus);
	//see if the test passes or not
	if(wantedValue==unitTest->coins){
		printf( "TEST PASSED: Values matched. Expected value: %d   updateCoins function return total: %d\n",wantedValue,unitTest->coins);
	}else{
		printf( "TEST Failed: Values do not matched. Expected value: %d   updateCoins function return total: %d\n",wantedValue,unitTest->coins);
	}


free(unitTest);
	return 0;
}
