#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * int_strlen - Entry point
 *
 * s: Pointer
 * Return Length of a string
 */
int _strlen(char *s)
{
	int i;
	int len = 0;
	
	for (i = 0; s[i] != '\0'; len++)
	{
		len++;
	}
	return (len);
}
