#include "lists.h"
/**
 * add_dnodeint - adds a new node at beginning
 *
 * @head: the head node
 * @n: data of the node
 *
 * Return: The new node at beginning
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
