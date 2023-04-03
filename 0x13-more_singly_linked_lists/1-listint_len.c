#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return the number of elements in a link list
 * @h: linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
size_t nbr_element = 0;
const listint_t *current = h;

while (current != NULL)
{
current = current->next;
nbr_element++;
}
return (nbr_element);
}
