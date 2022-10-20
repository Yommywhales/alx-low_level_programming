#include "main.h"

/**
 * jack_bauer - prints every minite of the day
 */
void jack_bauer(void);
{
	int hour, minit

		for (hour = 0; hour <= 23; hour++)
	{
		for (minite = 0; minite <= 59; minite++)
		{
			_putchar ((hour / 10) + '0');
			_putchar ((hour % 10) + '0');
			_putchar (':');
			_putchar ((minite / 10) + '0');
			_putchar ((minite % 10) + '0');
			_putchar ('\n');
		}
	}
}
