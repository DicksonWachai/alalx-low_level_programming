#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 *
 * @head: the head of the node
 * @n: data of the node
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;

	return (new);
}
