#include "main.h"

/**
 * -islower.c - checkif the character is lower 
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('0');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
