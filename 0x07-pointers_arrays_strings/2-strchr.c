#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 *
 * @s: pointer to a string
 * @c: character string
 *
 * Return: pointer to the first string character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
