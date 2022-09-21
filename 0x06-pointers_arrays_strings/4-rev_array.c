#include "main.h"
/**
 * reverse_array - revereses an array.
 * @m: pointer to array.
 * @b: number of elements of an array.
 *
 * Return: void.
 */
void reverse_array(int *m, int b)
{
	int temp, counter;

	b = b - 1;
	counter = 0;
	while (counter <= b)
	{
		temp = m[counter];
		m[counter++] = m[b];
		m[b--] = temp;
	}
}
