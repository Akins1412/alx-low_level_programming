#include <stdio.h>
#include"main.h"
/**
 * main - prints its name
 * @agrc: count number of argument
 * @agrv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	(void)argv;
	printf("%s\n", *argv);

	return (0);
}
