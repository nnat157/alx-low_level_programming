#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)

{
	int i = 0;
	int len;

	while (s[i] != '\0')

		i++;

	len = i;

	return (len);

}
