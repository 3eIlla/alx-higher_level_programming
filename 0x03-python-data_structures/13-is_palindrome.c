#include "lists.h"


/**
 * palindrom -  recursive palind o not
 *
 * @head: head list
 *
 * Return: (0) f not a palindrome, (1) f it is.
 */
int is_palindrome(listint_t **head)
{
	if (head == NULL || *head == NULL)
		{
			return (1);
		}

	return (aux_palind(head, *head));
}

/**
 * aux_palind - funct 2 know f s palindrome
 *
 * @head: head list
 * @end: end list
 */
int aux_palind(listint_t **head, listint_t *end)
{
	while (end == NULL)
		{
			return (1);
		}

	if (aux_palind(head, end->next) && (*head)->n == end->n)
	{
		*head = (*head)->next;
		return (1);
	}
	return (0);
}

