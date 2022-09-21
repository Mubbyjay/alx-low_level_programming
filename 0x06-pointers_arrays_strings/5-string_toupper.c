#include "main.hi"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @y: pointer to string.
 *
 * Return: pointer to uppercase string.
 */
char *string_toupper(char *y)
{
	int length;

	length = 0;
	while (y[length] != '\0')
	{
		if (y[length] >= 97 && y[length] <= 122)
		{
			y[length] = y[length] - 32;
		}
		length++;
	}
	return (y);
}
