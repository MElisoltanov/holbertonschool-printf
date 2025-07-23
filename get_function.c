#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> 2bb295d8764bbf0b90184ecd36aadf7842310d85
/**
 * get_print_func - Selects the correct function to handle a format specifier
 * @specifier: Format specifier character
 * Return: Pointer to the corresponding print function, or NULL if not found
 */

int (*get_print_func(char specifier))(va_list)
{
<<<<<<< HEAD
    /* Étape 1 : Définir une structure qui associe les spécificateurs à leurs fonctions */
=======
>>>>>>> 2bb295d8764bbf0b90184ecd36aadf7842310d85
    int i;
    func_t p[] = {
        {"c", print_char},
        {"s", print_string},
        {"d", print_number},
        {"i", print_number},
        {NULL, NULL}
    };
<<<<<<< HEAD
    /* Étape 2 : Parcourir la structure pour trouver une correspondance */
=======

>>>>>>> 2bb295d8764bbf0b90184ecd36aadf7842310d85
    for (i = 0; p[i].t; i++)
    {
        if (specifier == *(p[i].t))
        {
<<<<<<< HEAD
            /* Étape 3 : Retourner le pointeur vers la bonne fonction si trouvée */
            return (p[i].f);
        }
    }
    /* Étape 4 : Retourner NULL si le spécificateur n’est pas reconnu */
=======
            return (p[i].f);
        }
    }

>>>>>>> 2bb295d8764bbf0b90184ecd36aadf7842310d85
    return (NULL);
}
