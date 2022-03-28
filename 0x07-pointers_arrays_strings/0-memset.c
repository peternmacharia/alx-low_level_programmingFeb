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

	i = 0;
	while(i < n)
	{
		if(i % 10)
		{
			*s = &b;
		}
		else
		{
			&b;
		}
		i++;
		return (0);
	}
}
