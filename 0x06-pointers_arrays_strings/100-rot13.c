#include "main.h"
#include <stdio.n>
/**
 * rot13 - encoder rot13
 * @y: Pointing to string params
 *
 * Return: *s
 */
char *rot13(char *y)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(y + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(y + i))
			{
				*(y + i) = b[j];
				break;
			}
		}
	}
	return (y);
}
