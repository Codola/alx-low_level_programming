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
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
