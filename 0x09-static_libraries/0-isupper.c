#include "main.h"
/**
 * _isupper - checking if input uppercase
 * @c: input
 * Return: returning 1 if uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
