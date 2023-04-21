#include "main.h"
#include <stdarg.h>


/**
 * _printf - is a function that prints string
 * @format: - is a string character.
 * @...: are the arguements entere.
 * Return: Length of the printed string with '\0'.
 */
int _printf(const char *format, ...)
{   
    va_list ap;
    int length = 0;

    va_start(ap, format);
    while (*format != '\0')
    {

        
        if (*format == '%')
        {
            format++;
            switch(*format)
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
                case '%':
                {
                    _putchar('%');
                    length += 1;
                    break;
                }
            }
        }
        else
        {
            length += 1;
            _putchar(*format);
        }
        
        format++;
    }
    va_end(ap);

    return (length);
}