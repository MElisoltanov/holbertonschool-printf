#include "main.h"

/**
 * get_print_func - Selects the correct function to handle a format specifier
 * @specifier: Format specifier character
 * Return: Pointer to the corresponding print function, or NULL if not found
 */

int (*get_print_func(char specifier))(va_list)
{
	int i;
	func_t p[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_number},
		{"i", print_number},
		{NULL, NULL}
	};

	for (i = 0; p[i].t; i++)
	{
		if (specifier == *(p[i].t))
		{
			return (p[i].f);
		}
	}

	return (NULL);
}
