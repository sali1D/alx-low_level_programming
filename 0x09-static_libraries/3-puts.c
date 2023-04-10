#include "main.h"
/**
 * _puts - printing a string followed by new line
 * @str: input character
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
