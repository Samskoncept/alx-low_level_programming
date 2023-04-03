#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint - add nodes to the head of a linked list
 * @head: link list head
 * @n: int element of the linked list
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = (listint_t *) malloc(sizeof(listint_t));

if (new_node == NULL)
{
free(new_node);
return (NULL);
}

new_node->n = n;

new_node->next = *head;
*head = new_node;

return (new_node);
}
