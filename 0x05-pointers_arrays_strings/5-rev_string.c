#include "main.h"

/**
 * rev_string - Reverses a string
 * @j: Input string
 * Return: String in reverse
 */

void rev_string(char *j)
{
	char rev = j[0];
	int counter = 0;
	int i;

	while (j[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = j[i];
		j[i] = j[counter];
		j[counter] = rev;
	}
}
