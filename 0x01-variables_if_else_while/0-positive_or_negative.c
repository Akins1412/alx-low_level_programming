#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
		{
			prinf("%d" is postive\n. n);
		}
	else(n == 0)
	{
		prtrintf("%d" is zero\n. n);
	}
	else(n<0)
	{
		printf("%d" is negative\n. n);
	return (0);
	}
}
