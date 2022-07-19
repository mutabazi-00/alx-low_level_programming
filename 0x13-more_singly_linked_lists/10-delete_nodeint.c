#include "lists.h"
/**
  * delete_nodeint_at_index - function that deletes the node at index index
  *of a listint_t linked list
  * @head: Head of a list
  * @index: index of the list where the node should be deleted
  * Return: 1 if success, -1 if failure
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
	{
	unsigned int i;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
