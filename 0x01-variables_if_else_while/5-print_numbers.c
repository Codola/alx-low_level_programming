#include <stdio.h>
/**
 * main - eentry point
 *
 * Description: using the main function
 * this program prints numbers 1 to 10 in base 10
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10 ; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
