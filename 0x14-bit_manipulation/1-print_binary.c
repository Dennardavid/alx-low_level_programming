#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number is  to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	// Print the rightmost digit of the binary representation of the number.
    // This is done by checking if the rightmost digit is 0 or 1 using a binary "AND" operation.
    // Then the result is added to the character '0' to get the ASCII code of the digit, and printed to the console
	_putchar((n & 1) + '0');
}
