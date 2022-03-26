#include "main.h"

/**
 * _strcat - Function main entry
 *
 * @dest: Variable String
 * @src: Variable String
 * Return: 0
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
	dest[i] = '\0';
	printf("%s", dest);
	print("%s", src);
	return (0);
}
