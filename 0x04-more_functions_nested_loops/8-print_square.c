#include "main.h"
/**
 * print_square - printing squares
 * @n: input size
 * Return: returning nothing
 */
void print_square(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = i; j <= n; j++)
				_putchar(' ');
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
