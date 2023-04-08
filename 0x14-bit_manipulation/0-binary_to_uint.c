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
	unsigned int number_converted_to = 0;
	int length_pointer = 0;

	if (b[length_pointer] == '\0')
		return (0);

	while ((b[length_pointer] == '0') || (b[lenth_pointer] == '1'))
	{
		number_converted_to = number_converted_to << 1;
		number_converted_to += b[length_pointer] - '0';
		length_pointer++;
	}

	return (number_converted_to);
}
