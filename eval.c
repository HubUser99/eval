#include "evaluation.h"

void evaluation ( const int s[], int m[] )
{
	int i;
	
	for ( i = 0; i < MAX && s[ i ] != SENTINEL; ++i )
	{
		if		( s[ i ] >= 0 && s[ i ] < 30 ) { m[ i ] = 0; }
		else if ( s[ i ] >= 30 && s[ i ] < 45 ) { m[ i ] = 1; }
		else if ( s[ i ] >= 45 && s[ i ] < 60 ) { m[ i ] = 2; }
		else if ( s[ i ] >= 60 && s[ i ] < 75 ) { m[ i ] = 3; }
		else if ( s[ i ] >= 75 && s[ i ] < 90 ) { m[ i ] = 4; }
		else if ( s[ i ] >= 90 && s[ i ] < 100 ) { m[ i ] = 5; }
	}
	m[ i ] = SENTINEL;

	printf( "\nEval is done\n" );
}
