#include "main.h"
/**
 * main_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char m, b;

	for (b = 0; b <= 9; b++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
