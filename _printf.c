#include "main.h"

/**
 * handle_specifier - Handles format specifiers
 * and calls corresponding function
 * @format: The format string
 * @args: va_list of arguments
 * @i: Pointer to the current index in format string
 *
 * Return: Number of characters printed for the current specifier
 */

int handle_specifier(const char *format, va_list args, int *i)
{
	int (*func_ptr)(va_list);

	if (format[*i + 1] == '\0')
	{
		return (-1);
	}

	if (format[*i + 1] == 'c')
	{
		func_ptr = print_char;
	}

	else if (format[*i + 1] == 's')
	{
		func_ptr = print_string;
	}

	else if (format[*i + 1] == 'd' || format[*i + 1] == 'i')
	{
		func_ptr = print_number;
	}

	else if (format[*i + 1] == '%')
	{
		_putchar('%');
		(*i)++;
		return (1);
	}

	else
	{
		_putchar('%');
		_putchar(format[*i + 1]);
		(*i)++;
		return (2);
	}

	(*i)++;
	return (func_ptr(args));
}


/**
 * _printf - Produces output according to a format
 * @format: A string with format specifiers
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i;

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}

			count += handle_specifier(format, args, &i);
			continue;
		}

		_putchar(format[i]);
		count++;
	}

	va_end(args);
	return (count);
}
