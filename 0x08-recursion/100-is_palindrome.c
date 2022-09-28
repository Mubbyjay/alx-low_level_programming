#include "main.h"

/**
 * _strlen_recursion - gives length of string
 * @s: the string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
