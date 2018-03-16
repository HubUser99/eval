#include <stdio.h>

#define MAX 30
#define SENTINEL -1

// Function prototypes
void input_scores ( int s[] );
void evaluation ( const int s[], int m[] );
void classification ( const int m[], int stat[] );
void output_results ( const int m[], const int stat[] );
