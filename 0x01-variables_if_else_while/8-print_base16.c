#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';
	char alphas = 'a';

	for (num = '0'; num <= '9'; num++)
		puthchar(num);
	for (alphas = 'a'; alphas <= 'f'; alphas++)
		putchar(alphas);
	putchar('\n');
	return (0);
}
