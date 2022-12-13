#include "main.h"

/**
 * main - Entery point
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putcahr(c);
		c++;
	}
	_putchar('\n');
	return (0);
}

