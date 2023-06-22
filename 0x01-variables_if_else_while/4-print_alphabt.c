#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabets without q and e
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
