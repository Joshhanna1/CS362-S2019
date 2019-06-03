#include "dominion.h"
#include "dominion_helpers.h"
#include "rngs.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){

	int testValue[]={1,2,3,4,5,6,7,8,9,10}, i, *index;
	index = kingdomCards(1,2,3,4,5,6,7,8,9,10);

	for( i = 0; i < 10; i++){
		if(index[i] == testValue[i]){
		//printf( "TEST PASSED: values of the tested arrays match.Expected value: %d   numHandCards function return value: %d\n",testValue,index);
		//}
		//else{
		printf( "TEST Failed: Values do not matched.Expected value: %d   numHandCards function return value: %d\n",testValue,index);
		}
	}


	return 0;
}
