#include "main.h"
/**
 * Reverse_array - reverses and array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
