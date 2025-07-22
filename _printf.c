#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: A string with format specifiers
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i;
	int (*func_ptr)(va_list);

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

			if (format[i + 1] == 'c')
			{
				func_ptr = print_char;
				count += func_ptr(args);
				i++;
				continue;
			}

			else if (format[i + 1] == 's')
			{
				func_ptr = print_string;
				count += func_ptr(args);
				i++;
				continue;
			}

			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				func_ptr = print_number;
				count += func_ptr(args);
				i++;
				continue;
			}

			else if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i++;
				continue;
			}

			_putchar(format[i]);
			count++;
		}

		else 
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(args);
	return (count);
}
