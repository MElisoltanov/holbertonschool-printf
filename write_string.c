#include "main.h"
#include <stdarg.h>

/**
 * print_string - Prints a string
 * @args: Argument list containing the string to print
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	int i;
	int count = 0;

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		count++;
	}

	return (count);
}
