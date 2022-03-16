#include <stdio.h>
#include "main.h"
void print_alphabet(void);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char _putchar;
	char alphabet = "abcdefghijklmnopqrstuvwxyz";
	_putchar = print_alphabet(alphabet);
	printf(_putchar "\n");
	return (0);
}

