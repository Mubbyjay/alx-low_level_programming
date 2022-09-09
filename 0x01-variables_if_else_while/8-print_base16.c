#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int mub = '0';
	char alpha = 'a';

	for (mub = '0'; mub <= '9'; mub++)
		putchar(mub);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');
	return (0);
}
