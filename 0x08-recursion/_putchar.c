#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stoudt
 * @c: The character to print
 *
 * Return: On Success 1.
 * on errror, - 1 is returned, and errno is set appropritely.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
