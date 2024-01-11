#include "lists.h"
/**
 * sum_dlistint - sums all the data
 * @head: head node
 *
 * Return: the sum of all the data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
