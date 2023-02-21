#include <unistd.h>
/**
 * Error on -1 is returned and error is set appropriately
 * Return on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
