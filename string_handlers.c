#include "main.h"


/**
 * string_handler - function that %s, %c, %r, %R any related to strings.
 * @p: Character pointer input.
 * @ap: arguement list.
 * Returns: Length of printed string.
 */

int string_handler(const char *p, va_list ap)
{
    int length = 0;

    if (*p)
    {
        switch (*p)
        {
        case 'c':
        {
            char character = va_arg(ap, int);
            _putchar(character);
            length += 1;
            break;
        }
        case 's':
        {
            char *str = va_arg(ap, char *);
            length += print_s(str);
            break;
        }
        case 'r':
        {
            char *str = va_arg(ap, char *);
            length += print_r(str);
            break;
        }
        case 'R':
        {
            char *str = va_arg(ap, char *);
            length += print_R(str);
            break;
        }
        case '%':
        {
            _putchar('%');
            length += 1;
            break;
        }
        }
    }
    
    return (length);
}