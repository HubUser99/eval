#include <stdio.h>
#include "func.h"

void
evaluation(int *scores, int *marks){
	int i;
	
	for(i = 0; (i < MAX) && (scores[i] != -1); i++){
		if(scores[i] >= 0 && scores[i] <= 17) marks[i] = 0;
		
		if(scores[i] > 17 && scores[i] <= 34) marks[i] = 1;
		
		if(scores[i] > 34 && scores[i] <= 51) marks[i] = 2;
		
		if(scores[i] > 51 && scores[i] <= 68) marks[i] = 3;
		
		if(scores[i] > 68 && scores[i] <= 85) marks[i] = 4;
		
		if(scores[i] > 85 && scores[i] <= 100) marks[i] = 5;
	}
}
