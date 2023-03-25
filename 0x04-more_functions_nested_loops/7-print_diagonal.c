#include "holberton.h"

/**
 * print_diagonal - function that prints diagonal line
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != 1)
					_putchar(' ');
				else
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
