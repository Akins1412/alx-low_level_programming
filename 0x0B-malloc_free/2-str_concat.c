#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - Concatenates two strings of any size
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	d = a + b;
	i = malloc((sizeof(char) * d) + 1);

	if (i == NULL)
		return (NULL);

	b = 0;

	while (c < d)
	{
		if (c <= a)
			i[c] = s1[c];

		if (c >= a)
		{
			i[c] = s2[b];
			b++;
		}

		c++;
	}

	i[c] = '\0';
	return (i);
}
