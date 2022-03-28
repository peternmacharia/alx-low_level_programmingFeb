#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: number of bytes in it's segment
 * @accept: the bytes that need to match with @s
 *
 * Return: the number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
