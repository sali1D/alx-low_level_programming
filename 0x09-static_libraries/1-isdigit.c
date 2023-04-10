#include "main.h"
/**
 * _isdigit - checking if an input is a digit
 * @c: input
 * Return: returning 1 if input is digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
