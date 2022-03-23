#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 *
 * @a - first pointer
 * @b - second pointer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
