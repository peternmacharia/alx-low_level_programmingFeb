#include "main.h"
#include <stdio.h>

/**
 * memset - Function entry point
 *
 * @s: string variable
 * @b: string variable
 * @n: int variable
 *
 * Return: Nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
