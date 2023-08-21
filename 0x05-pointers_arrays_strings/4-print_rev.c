#include "main.h"
/**
 * print_rev - imprime en reversa
 * @j: string
 * return: 0
 */
void print_rev(char *j)
{
	int longi = 0;
	int o;

	while (*j != '\0')
	{
		longi++;
		j++;
	}
	j--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*j);
		j--;
	}

	_putchar('\n');
}
