#include "evaluation.h"

void input_scores ( int s[] )
{
	int i,
		input = 0;
	
	printf( "\nEnter the scores or %d to end:\n\n", SENTINEL );
	for ( i = 0; i < MAX && input != SENTINEL; ++i )
	{
		printf( "\t%d: ", i + 1 );
		scanf( "%d", &input );
		s[ i ] = input;
	}
	
	printf( "\n%d scores are entered\n", i - 1 );
}
