#include "main.h"
#include <stdarg.h>
<<<<<<< HEAD
=======

>>>>>>> 2bb295d8764bbf0b90184ecd36aadf7842310d85
/**
 * print_string - Prints a string
 * @args: Argument list containing the string to print
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
<<<<<<< HEAD
    /* Étape 1 : Récupérer la chaîne depuis la liste d’arguments */
    char *s = va_arg(args, char *);
    int i;
    int count = 0;
    /* Étape 2 : Gérer le cas où la chaîne est NULL */
    if (s == NULL)
    {
        s = "(null)";
    }
    /* Étape 3 : Parcourir chaque caractère et l’imprimer avec _putchar */
    for (i = 0; s[i] != '\0'; i++)
    {
        _putchar(s[i]);
        /* Étape 4 : Compter le nombre total de caractères imprimés */
        count++;
    }
    /* Étape 5 : Retourner ce nombre */
    return (count);
    /*
    int i = 0;
    if (format[i + 1] == 's')
    {
        char *s = va_arg(args, char *);
        if (s == NULL)
        {
            s = "(null)";
        }
        for (j = 0; s[j] != '\0'; j++)
        {
            _putchar(s[j]);
            count++;
        }
        i++;
        continue;
    }
    */
}
=======
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
>>>>>>> 2bb295d8764bbf0b90184ecd36aadf7842310d85
