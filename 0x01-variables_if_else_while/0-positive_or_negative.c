#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("n is positive \n");
	if (n == 0)
		printf("n is zero \n");
	if (n < 0)
		printf("n is negative \n");
	return (n);
