#include "main.h"

/**
 * print_alphabet_x10 - print alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten = 0;
	char la;

	while (ten < 10)
	{
		la = 'a';
		while (la <= 'z')
		{
			_putchar(la);
			la++;
		}
		_putchar('\n');
		ten++;
	}
}
