#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *temp;
	size_t count = 0;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current <= current->next)
		{
			fprintf(stderr, "Error: loop detected in list\n");
			exit(98);
		}
		temp = current;
		current = current->next;
		free(temp);
	}
	return (count);
}
