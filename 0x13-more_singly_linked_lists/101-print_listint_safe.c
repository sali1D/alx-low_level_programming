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
	const listint_t *current = head, *prev;
	size_t count = 0;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current > current->next)
			prev = current, current = current->next;
		else
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
		if (prev >= current)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}
	}
	if (!current)
		return (count);
	current = current->next;
	while (current != prev)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	}
	printf("[%p] %d\n", (void *)current, current->n);
	count++;
	exit(98);
}
