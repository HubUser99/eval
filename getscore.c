#include <stdio.h>
#include "func.h"

void
input_scores(int *scores){
	int i, input = 0;
	printf("Enter Scores, -1 to end:\n");
	for(i = 0; i < MAX && input != -1; i++){
		printf("%d: ", i + 1);
		scanf("%d", &input);
		scores[i] = input;
	}
}

void
output_results(int *statistics){
	int i;
	
	for(i = 0; i < 6; i++){
		printf("%d: %d\n", i, statistics[i]);
	}
}
