#include "lists.h"

/**
 * check_cycle - checks f list s cyclical
 *
 * @list: pointer 2 list 2 check
 *
 * Return: (1) f cyclical, otherwise (0)
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		while (slow == fast)
			return (1);
	}
	return (0);
}
