#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number_to_convert = 0;
	int pointer_position = 0;

	if (b[pointer_position] == '\0')
		return (0);

	while ((b[pointer_position] == '0') || (b[pointer_position] == '1'))
	{
		number_to_convert <<= 1;
		number_to_convert += b[pointer_position] - '0';
		pointer_position++;
	}

	return (number_to_convert);
}
