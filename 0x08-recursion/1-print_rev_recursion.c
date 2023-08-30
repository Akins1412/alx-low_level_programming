#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: reverse input
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
