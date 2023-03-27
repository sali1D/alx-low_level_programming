#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int count = 0;
	int i = 0;
	char *a = str;
	int k;

	while (*a != '\0')
	{
		a++;
		count++;
	}
	i = count - 1;
	for (k = 0; k <= i; k++)
	{
		if (k % 2 == 0)
			_putchar(str[k]);
	}
	_putchar('\n');
}
