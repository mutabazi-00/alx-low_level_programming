#include "lists.h"
/**
  * pop_listint - function that deletes the head node of 
  * a listint_t linked list
  *@head: head of a list
  * Return: the head node’s data (n)
  */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;
	listint_t *ptr;

	if (*head == NULL)
		return (0);
	ptr = *head;
	i = ptr->n;
	temp = ptr->next;
	free(ptr);
	*head = temp;
	return (i);
}
