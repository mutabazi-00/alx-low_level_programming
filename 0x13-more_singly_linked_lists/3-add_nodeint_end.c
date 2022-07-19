#include "lists.h"

/**
 *add_nodeint_end - function that adds a new node at the end of
 *a listint_t list
 * @head: a head pointer which points to the first node of the listint_t list
 * @n: the data contained in the node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addnode_end;
	listint_t *ptr;

	addnode_end = (listint_t *)malloc(sizeof(listint_t));

	if (!addnode_end)
		return (NULL);
	addnode_end->n = n;
	addnode_end->next = NULL;
	ptr = *head;
	if (ptr == NULL)
		*head = addnode_end;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = addnode_end;
	}
	return (*head);
}
