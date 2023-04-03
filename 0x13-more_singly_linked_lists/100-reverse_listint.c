#include "lists.h"

/**
 * *reverse_listint - reverses a listint_t linked list.
 * @head: head of the link list
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *p;
listint_t *n;

p = NULL;
n = NULL;

while (*head != NULL)
{
n = (*head)->next;
(*head)->next = p;
p = *head;
*head = n;
}

*head = p;
return (*head);
}
