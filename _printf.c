#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: A string with format specifiers
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
    // Étape 1 : Initialiser les variables nécessaires (compteur, va_list)
    va_list args;
    int count = 0;
    int i, j;
    int (*func_ptr)(va_list);

    va_start(args, format);

    if (format == NULL)
    {
        return (-1);
    }

    // Étape 2 : Parcourir la chaîne format caractère par caractère
    for (i = 0; format[i] != '\0'; i++)
    {
        // Étape 3 : Si le caractère est %, vérifier le caractère suivant
        if (format[i] == '%')
        {
            if (format[i + 1] == '\0')
            {
                va_end(args);
                return (-1);
            }

            // Étape 4 : Selon le spécificateur, appeler la bonne fonction
            if (format[i + 1] == 'c')
            {
                _putchar(va_arg(args, int));
                count++;
                i++;
                continue;
            }
            
            // Étape 4 : Selon le spécificateur, appeler la bonne fonction
            else if (format[i + 1] == 's')
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

            // Étape 4 : Selon le spécificateur, appeler la bonne fonction
            else if (format[i + 1] == 'd' || format[i + 1] == 'i')
            {
                func_ptr = print_number;
                count += func_ptr(args);
                i++;
                continue;
            }

            // Étape 5 : Gérer le cas d'un pourcentage littéral (%%)
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

        // Étape 6 : Imprimer les caractères standards avec _putchar
        else 
        {
            _putchar(format[i]);
            count++;
        }
    }

    // Étape 7 : Fermer va_list et retourner le nombre de caractères imprimés
    va_end(args);
    return (count);
}
