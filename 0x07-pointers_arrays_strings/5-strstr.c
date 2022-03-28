#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string that contains @needle
 * @needle: occurrence of substring in @haystack
 *
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (hatstack);
	}
	retrun (NULL);
}
