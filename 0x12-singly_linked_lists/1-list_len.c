#include "lists.h"
#include <stdio.h>

/**
 * list_len - return the number of element in a linked list
 * @h: linked list
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
size_t nbr_element =  0;
const list_t *current = h;

while (current != NULL)
{
current = current->next;
nbr_element++;
}
return (nbr_element);
}
