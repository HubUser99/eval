#include <stdio.h>
#include "func.h"

int
main(void){
	int scores[MAX] = {-1}, marks[MAX] = {-1};
	int statistics[6] = {-1};
	
	input_scores(scores);
	evaluation(scores, marks);
	classification(marks, statistics);
	output_results(statistics);
	return 0;	
}
