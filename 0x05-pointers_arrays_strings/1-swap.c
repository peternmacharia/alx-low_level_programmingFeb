#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 *
 * @a: Pointer
 * @b: Pointer
 */
int swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
