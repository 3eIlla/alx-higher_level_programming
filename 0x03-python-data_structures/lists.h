#ifndef LISTS_H
#define LISTS_H



/* all lib*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: int
 * @next: points 2 z next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;




/* protos 4 tasks*/
size_t print_listint(const listint_t *h);

listint_t *add_nodeint_end(listint_t **head, const int n);

void free_listint(listint_t *head);

int is_palindrome(listint_t **head);

int aux_palind(listint_t **head, listint_t *end);




#endif
