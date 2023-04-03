#include "lists.h"

/**
<<<<<<< HEAD
 * free_listp2 - frees a linked list
=======
 * free_listp - frees a linked list
>>>>>>> a287b5ee42f46ceeec8b11e60b1adb624ebe86b9
 * @head: head of a list.
 *
 * Return: no return.
 */
<<<<<<< HEAD
void free_listp2(listp_t **head)
{
listp_t *temp;
listp_t *curr;

if (head != NULL)
{
curr = *head;
while ((temp = curr) != NULL)
{
curr = curr->next;
free(temp);
}
*head = NULL;
=======
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
>>>>>>> a287b5ee42f46ceeec8b11e60b1adb624ebe86b9
}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t nnodes = 0;
listp_t *hptr, *new, *add;
listint_t *curr;

hptr = NULL;
while (*h != NULL)
{
new = malloc(sizeof(listp_t));

if (new == NULL)
exit(98);

<<<<<<< HEAD
new->p = (void *)*h;
new->next = hptr;
hptr = new;

add = hptr;

while (add->next != NULL)
{
add = add->next;
if (*h == add->p)
{
*h = NULL;
free_listp2(&hptr);
return (nnodes);
}
}

curr = *h;
*h = (*h)->next;
free(curr);
nnodes++;
}

*h = NULL;
free_listp2(&hptr);
return (nnodes);
=======
/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&hptr);
	return (nnodes);
>>>>>>> a287b5ee42f46ceeec8b11e60b1adb624ebe86b9
}
