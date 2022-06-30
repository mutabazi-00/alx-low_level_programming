#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - function that allocates memory using malloc
  * @b: size of memory to be allocated
  * Return: pointer to the allocated memory (SUCCESS)
  * 98 if insufficient memory was avaiilable (FAILURE)
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
