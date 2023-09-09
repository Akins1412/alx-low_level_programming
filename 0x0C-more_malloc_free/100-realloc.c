#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - eallocates a memory block
  * @ptr: pointer to the memory previously allocated
  * @old_size: size in bytes of the allocated space
  * @new_size: is the new size in bytes of the new memory block
  *
  * Return: Always 0
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		s = malloc(new_size);

		if (s == NULL)
			return (NULL);

		return (s);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	s = malloc(new_size);

	if (s == NULL)
		return (NULL);

	for (a = 0; a < old_size && a < new_size; a++)
	{
		s[a] = ((char *) ptr)[a];
	}

	free(ptr);
	return (s);
}
