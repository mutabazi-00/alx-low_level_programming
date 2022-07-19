#include "lists.h"
/**
  * find_listint_loop - function that finds the loop in a linked list
  * @head: Head of a list
  * Return: The address of the node where the loop starts, or NULL
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p2 = head;
	listint_t *prev = head;

	if (!head)
		return (NULL);

	while (p2 && prev && prev->next)
	{
		prev = prev->next->next;
		p2 = p2->next;
		if (prev == p2)
		{
			p2 = prev;
			while (p2 != prev)
			{
				p2 = p2->next;
				prev = prev->next;
			}
			return (prev);
		}
	}

	return (NULL);
}
