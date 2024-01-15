#include "main.h"
/**
 * _strlen - returns the length of a string
 * @j: string
 * Return: length
 */
int _strlen(char *j)
{
	int longi = 0;

	while (*j != '\0')
	{
		longi++;
		j++;
	}

	return (longi);
}
