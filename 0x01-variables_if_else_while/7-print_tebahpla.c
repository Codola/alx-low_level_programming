#include <stdio.h>
/**
 * main - eentry point
 *
 * Description: using the main function
 * this program prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a' ; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
