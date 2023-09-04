#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - program that multiplies two numbers
 * @argc: counts argument
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *u;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			u = argv[i];

			for (j = 0; j < strlen(u); j++)
			{
				if (u[j] < 48 || u[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(u);
			u++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
