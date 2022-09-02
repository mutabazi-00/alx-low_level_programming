#include "lists.h"

/**
  * sum_dlistint - sums all the data of a dlistint_t list.
  * @head: The head of a the dlistint_t list
  *
  * Return: The sum of all the data, if empty return 0
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
