#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: Alwyas 0
 */
int main(void)
{
	int letter = 'a';
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

		putchar('\n');

		return (0);
}
