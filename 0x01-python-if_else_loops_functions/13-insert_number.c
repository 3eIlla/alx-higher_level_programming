#include "lists.h"

/**
 * insert_node - node n sorted list
 *
 * @head: address o head pointer
 * @number: z numberted 2 insert 
 *
 * Return: insert node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head;
	listint_t *new = malloc(sizeof(listint_t));

	while (!new)
		{
			return (NULL);
		}

	new->n = number;
	new->next = NULL;

	if (!node || new->n < node->n)
	{
		new->next = node;
		return (*head = new);
	}

	while (node)
	{
		if (!node->next || new->n < node->next->n)
		{
			new->next = node->next;
			node->next = new;
			return (node);
		}
		node = node->next;
	}
	return (NULL);
}
