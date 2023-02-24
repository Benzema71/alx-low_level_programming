#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character should be printed
 * @n: number of times the character _ should be printed
 * Return: nothing
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
