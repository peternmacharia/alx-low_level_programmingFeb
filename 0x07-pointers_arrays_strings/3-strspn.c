#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length os a prefix substring
 *
 * @s: number of bytes in initial segment
 * @accept: bytes consistent 
 *
 * Return: number of bytes in segment @s form @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	while (*accept)
	{
		if (s != accept)
			s++;
		else
			return (s);
	}
}
