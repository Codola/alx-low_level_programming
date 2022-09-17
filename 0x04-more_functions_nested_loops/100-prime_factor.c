#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned int d = 2;
	unsigned long n = 612852475143;

	while (d != n)
	{
		if (n % d == 0)
		{
			n = n / d;
		} else
		{
			d++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
