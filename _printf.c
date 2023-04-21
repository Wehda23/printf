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

                    if (value < 0 )
                    {
                        value *= -1;
                        _putchar(45);
                        length += 1;
                    }

                    if (value  != 0)
                    {
                        length += print_d(value);
                    }
                    else
                    {
                        _putchar('0');
                        length += 1;
                    }
                    break;
                }

                case 'c':
                {

                    break;
                }

                case 's':
                {

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