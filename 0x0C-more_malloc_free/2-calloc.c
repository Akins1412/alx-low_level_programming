#include "main.h"
#include <stdlib.h>

/**
  * _calloc - ...
  * @nmemb: number of members
  * @size: size
  *
  * Return: ...
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, c = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = nmemb * size;
	s = malloc(c);

	if (s == NULL)
		return (NULL);

	while (a < c)
	{
		s[a] = 0;
		a++;
	}

	return (s);
}
