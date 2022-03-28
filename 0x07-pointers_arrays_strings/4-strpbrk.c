#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any set of bytes
 *
 * @s: first occurence of string s
 * @accept: string of bytes
 *
 * Return: searched set of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
