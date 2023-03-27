#include "main.h"
/**
 * _strlen - writing a length of a sting
 * @s: input character
 * Return: returning length
 */
int _strlen(char *s)
{
	int i;

	for (; *s++;)
		i++;
	return (i);
}
