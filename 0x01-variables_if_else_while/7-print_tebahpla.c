#include <stdio.h>
/**
 * main - eentry point
 *
 * Description: using the main function
 * this program prints all alphabets in lower case except q and e
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
