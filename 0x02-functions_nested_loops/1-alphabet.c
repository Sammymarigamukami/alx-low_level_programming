#include "main.h"`

/**
 * print_alphabet - Print all alphabets in lowercase
 * Description: This function prints all alphabets in
 * lowercase to the standard output.
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
