#include <unistd.h>

/**
 * _putchar - writesnthe character c to stdout
 * @c: The characters to print
 * Return: On Success 1
 * On Error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
