#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @n: number of bytes to be changed
 * @s: starting address of memory to be filled
 * @b: the desired value
 *
 * Return: success (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}

