#ifndef LISTS_H
#define LISTS_H

/*libs*/
#include <stdio.h>

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: int
 * @next: points 2 z nxt node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;


/*proto*/

size_t print_listint(const listint_t *h);

listint_t *add_nodeint(listint_t **head, const int n);

void free_listint(listint_t *head);

int check_cycle(listint_t *list);

#endif
