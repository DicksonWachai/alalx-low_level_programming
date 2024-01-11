#include "lists.h"
/**
 * print_dlistint - prints all the elements
 *
 * @h: the head of the list
 * Return: the counter
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
