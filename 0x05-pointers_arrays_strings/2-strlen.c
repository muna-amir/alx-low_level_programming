#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: the character to check
 * Description: will return the length of a string
 * Return: 0 when successfull
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
