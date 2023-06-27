#include "main.h"

/**
 * print_alphabet - print all alphabets in lowercase
 * Description: Prints lowercase alphabet (from 'a' to 'z')
 */
void print_alphabet(void)
		{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);
		}
		_putchar('\n');
		}
