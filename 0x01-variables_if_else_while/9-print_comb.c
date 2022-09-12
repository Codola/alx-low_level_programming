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
	int num;

	for (num = 10; num <= 19; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
