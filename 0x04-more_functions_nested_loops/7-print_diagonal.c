#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)/* if 0 or negative just newline */
		_putchar('\n');
	for (i = 0; i < n; i++)/* we want the amount of rows equal to n */
	{
	/*for each column we start at the origin 0,0*/
	/* when i did j = +i i get a different pattern, the up right pattern*/
	/* i is the inital spacing needed eg. for 10*/
	/* j is the counter. j = 10 - 0 , 10 is not less than 10, so skip*/
	/* now j = 9, 9 < 10 true, do once */
	/* omg i am a genius UPDATENVM. im an idiot. i could have  */
	/* just done a i = j check and insert \ if true and space if not*/
		for (j = n - i; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
