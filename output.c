#include "evaluation.h"

void output_results ( const int m[], const int stat[] )
{
	int i;
	
	printf( "\n ~~~~~~~~~~~~~~~~\n" );	
	printf( "     The marks:" );
	for ( i = 0; i < MAX && m[ i ] != SENTINEL; ++i )
	{
		printf( "%4d", m[ i ] );
	}
	
	printf( "\n ~~~~~~~~~~~~~~~~\n" );	
	
	for ( i = 0; i < 6; ++i )
	{
		printf( "\nMark %d: %d hits", i, stat[ i ] );
	}
	printf( "\n\n" );
}
