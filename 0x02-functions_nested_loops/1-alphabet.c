#include "main.h"

/**
 * main - prints the alphabet, in lowercase
 * print_alphabet- prints the alphabet, in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
