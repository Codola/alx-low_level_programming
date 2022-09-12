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
