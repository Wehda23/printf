#include "main.h"



/**
 * digits_handler - function that %d, %f, %u, %b any related to numbers.
 * @p: Character pointer input.
 * @ap: arguement list.
 * Returns: Length of printed numbers.
 */
int digits_handler(const char *p, va_list ap)
{
    int length = 0;

    if (*p)
    {
        switch (*p)
        {
        case 'd':
        {
            int value = va_arg(ap, int);
            length += print_d(value);
            break;
        }
        case 'i':
        {
            int value = va_arg(ap, int);
            length += print_i(value);
            break;
        }
        case 'f':
        {
            double value = va_arg(ap, double);
            length += print_f(value, 6, 0);
            break;
        }
        case 'b':
        {
            int value = va_arg(ap, int);
            length += print_b(value);
            break;
        } 
        }
    }
    
    return (length);
}