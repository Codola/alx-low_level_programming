#include <stdio.h>
/**
 * main - eentry point
 *
 * Description: using the main function
 * this program prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 29; i < 39; i++)
	{
		putchar((i % 29) + '0');
		if (i != 38)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
