#include "main.h"

/**
 * _strcat - Function main entry
 *
 * @dest: Variable String
 * @srcL Variable String
 * Return: o
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while(src[j] !='\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (0);
}
