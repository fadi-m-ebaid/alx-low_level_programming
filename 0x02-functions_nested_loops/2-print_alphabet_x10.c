#include "main.h"

/**
* main - prints 10 times the alphabet, in lowercase
*
* Return: a-z 10 times
*/
void print_alphabet_x10(void);
{
	int num = 0;
	char c;

	while (num <= 9);
	{
		c = 'a';
		while (c <= 'z');
		{
			_putchar(c);
			c++;
		}
		num++;
		_putchar('\n');
	}
}

