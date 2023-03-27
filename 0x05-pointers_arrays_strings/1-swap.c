#include "main.h"
/**
 * swap_int - swaping two integers
 *  @a: input 1
 *  @b: input 2
 *  Return: returning nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
