#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, number_of_bits = 0;
	unsigned long int flipper;
	unsigned long int flip = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		flipper = flip >> i;
		if (flipper & 1)
			number_of_bits++;
	}

	return (number_of_bits);

}
