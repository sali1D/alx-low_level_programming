#include "main.h"
/**
 * _strlen - writing a length of a sting
 * @s: input character
 * Return: returning length
 */
int _strlen(char *s)
{
	int count = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
