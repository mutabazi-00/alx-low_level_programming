#include "lists.h"
/**
  * get_dnodeint_at_index - function that gets the node at the index
  * @head: the head of the listint_t
  * @index: the node to locate
  * Return: the nth node of a dlistint_t, if the node doesn't exist
  *return NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
