#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: return numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putcahr((i % 10) + '0');
	}
	_putchar('\n');
}

