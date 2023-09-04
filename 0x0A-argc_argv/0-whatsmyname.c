#include "main.h"
#include <stdio.h>
/**
 * main - prints its name
 * @agrc: count number of argument
 * @agrv: input
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
