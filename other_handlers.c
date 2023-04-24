#include "main.h"


/**
 * string_handler - function that %l, %h, %o, %p any related to other functionality.
 * @p: Character pointer input.
 * @ap: arguement list.
 * Returns: Length of printed characters or numbers.
 */

int others_handler(const char *p, va_list ap)
{
    int length = 0;

    if (*p)
    {
        switch (*p)
        {
        case 'h':
        {
            char character = va_arg(ap, int);
            _putchar(character);
            length += 1;
            break;
        }
        case 'l':
        {
            char character = va_arg(ap, int);
            _putchar(character);
            length += 1;
            break;
        }
        }
    }

    
    return (length);
}