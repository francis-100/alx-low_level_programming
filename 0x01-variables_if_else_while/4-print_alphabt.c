#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * followed by new line, except q and e
 *
 * Return: Aways 0 -Success
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
