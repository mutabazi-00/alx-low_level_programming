#include "lists.h"
/**
  * list_len - function that returns the number of elements
  *in a linked list_t list
  * @h: singly linked list
  * Return: number of elements in that list
  */
size_t list_len(const list_t *h)
{
	size_t numb_list;

	numb_list = 0;
	while (h != NULL)
	{
		h = h->next;
		numb_list++;
	}
	return (numb_list);
}
