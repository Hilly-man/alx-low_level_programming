#include "main.h"
#include <stdint.h>

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	uint16_t i = 0x0001;
	uint8_t *p = (uint8_t *)&i;

	return (*p == 0x01);
}
