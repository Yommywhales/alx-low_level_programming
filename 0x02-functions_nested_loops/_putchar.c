#include "main.h"
#include <uninstd.h>

/**
 * _putchar - writes the character c to support
 * @c: the character to print
 *
 * Returrn: on success 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
