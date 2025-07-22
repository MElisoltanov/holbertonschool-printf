#include "main.h"

/**
 * get_print_func - Selects the correct function to handle a format specifier
 * @specifier: Format specifier character
 * Return: Pointer to the corresponding print function, or NULL if not found
 */

int (*get_print_func(char specifier))(va_list)
{
    /* Étape 1 : Définir une structure qui associe les spécificateurs à leurs fonctions */
    int i;
    func_t p[] = {
        {"c", print_char},
        {"s", print_string},
        {"d", print_number},
        {"i", print_number},
        {NULL, NULL}
    };

    /* Étape 2 : Parcourir la structure pour trouver une correspondance */
    for (i = 0; p[i].t; i++)
    {
        if (specifier == *(p[i].t))
        {
            /* Étape 3 : Retourner le pointeur vers la bonne fonction si trouvée */
            return (p[i].f);
        }
    }

    /* Étape 4 : Retourner NULL si le spécificateur n’est pas reconnu */
    return (NULL);
}
