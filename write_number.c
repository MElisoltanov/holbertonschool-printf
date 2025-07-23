#include "main.h"
#include <stdarg.h>

/**
 * print_digits - Prints digits of a number recursively
 * @n: The number to print
 * Return: Number of characters printed
 */

int print_digits(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_digits(n / 10);

	_putchar((n % 10) + '0');
	count++;

	return (count);
}

/**
 * print_number - Prints an integer number
 * @args: Argument list containing the integer to print
 * Return: Number of characters printed
 */

int print_number(va_list args)
{
	int num;
	unsigned int count = 0;
	unsigned int n;

	num = (va_arg(args, int));

	if (num < 0)
	{
		_putchar('-');
		count++;
		n = -num;
	}

	else

	{
		n = num;
	}

	count += print_digits(n);

	return (count);
}
