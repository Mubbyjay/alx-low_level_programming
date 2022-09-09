#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int mub = '0';
	char alpas = 'a';

	for (mub = '0'; mub <= '9'; mub++)
		puthchar(mub);
	for (alphas = 'a'; alphas <= 'f'; alphas++)
		putchar(alphas);
	putchar('\n');
	return (0);
}
