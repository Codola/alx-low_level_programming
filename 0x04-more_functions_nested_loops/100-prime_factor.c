#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned long factor = 612852475143;
  unsigned int d = 2;
  
	while (d != factor)
	{
		if (factor % d == 0)
		{
			factor = factor / d;
		} else
		{
			d++;
		}
	}
	printf("%lu\n", factor);
	return (0);
}
