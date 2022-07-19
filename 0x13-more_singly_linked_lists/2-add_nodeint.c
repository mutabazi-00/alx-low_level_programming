#include "lists.h"
/**
* add_nodeint - function that adds a node at the beginning of a listint_t list
* @head: List of the nodes
* @n: data in that node
* Return: Address of the new element, or NULL if failure
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nodebegg = (listint_t *)malloc(sizeof(listint_t));

if (!nodebegg)
return (NULL);

nodebegg->n = n;
nodebegg->next = NULL;

nodebegg->next = *head;
*head = nodebegg;
return (*head);
}
