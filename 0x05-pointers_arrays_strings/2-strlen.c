#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len++;
	}

	return (strlen(s));

}
