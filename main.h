
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_number(va_list args);
int _putchar(char c);
int handle_specifier(const char *format, va_list args, int *i);
int (*get_print_func(char specifier))(va_list);

/**
 * struct func_type - Struct to associate format specifiers with functions
 * @t: Format specifier (e.g., "c", "s", "d")
 * @f: Pointer to the corresponding handler function
 */

typedef struct func_type
{
	char *t;
	int (*f)(va_list);
} func_t;

#endif /* MAIN_H */
