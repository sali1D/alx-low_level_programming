#include "main.h"
/**
 * print_last_digit - printing last digit og a number
 * @i: imput number
 * Return: returning value of last digit
 */
int print_last_digit(int i)
{
	int c;

	c = i % 10;
	if (i < 0)
	{
		_putchar(-c + 48);
		return (-c);
	}
	else
	{
		_putchar(c + 48);
		return (c);
	}
}
