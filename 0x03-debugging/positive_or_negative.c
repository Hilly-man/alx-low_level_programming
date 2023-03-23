#include "main.h"
/**
 * positive_or_negative - check for positive or negative numbers
 *
 * @i: is the nuber to be checked
 *
 * Return: 0 alaways
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
