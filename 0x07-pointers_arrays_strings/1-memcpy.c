#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies the bytes to memory
 *
 * @dest: storage memory area
 * @src: pointer to memory area @dest
 * @n: number of bytes
 *
 * Return: n bytes in @dest memory area
 */
char *memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
