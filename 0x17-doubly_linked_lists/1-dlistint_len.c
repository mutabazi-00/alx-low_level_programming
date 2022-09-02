# include "lists.h"

/**
  * dlistint_len - counts number of elements in a dlistint_t list
  * @h: head of the dlistint_t list
  *
  * Return: number of elements in the dlistint_t list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
