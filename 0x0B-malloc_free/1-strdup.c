#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *j;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	j = malloc((sizeof(char) * i) + 1);

	if (j == NULL)
		return (NULL);

	while (a < i)
	{
		j[a] = str[a];
		a++;
	}

	j[a] = '\0';
	return (j);
}
