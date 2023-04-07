#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @a The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *a)
{
	int longit = 0;

	if (*a)
	{
		longit++;
		longit += _strlen_recursion(a + 1);
	}

	return (longit);
}
