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
typedef struct func_type
{
    char *t;
    int (*f)(va_list);
} func_t;

typedef struct func_type
{
    char *t;
    int (*f)(va_list);

} func_t;

#endif