#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with constant type
 *
 * @s: pointer to memory area to fill
 * @b: constant byte
 * @n: the number of bytes to fill
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
