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
	char alph;

	for (alph = 'a'; alph <= 'z' ; alph++)
	{
		if (alph == 'q' || alph == 'e')
		{
			alph++;
		}
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
