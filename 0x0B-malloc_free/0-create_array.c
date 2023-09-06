#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars, and initializes it
  * @size: The size of the array
  * @c: The char to fill in the array
  *
  * Return: NULL / a pointer to the array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *i;

	if (size == 0)
		return (NULL);

	i = malloc(size * sizeof(char));

	if (i == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		i[j] = c;
	}

	return (i);
}
