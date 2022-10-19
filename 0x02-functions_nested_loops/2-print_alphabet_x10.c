#include "main.h"

/**
 *prints_alphabets -> lower case
 */
void print_alphabet_x10(void)
{
	int j;
	int p;

	for (p = '0' ; p < 10 ; j++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		{
		 _putchar(j);
		}
	_putchar('\n');
	}

}
