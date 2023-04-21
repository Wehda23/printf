#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{   
    va_list ap;

    va_start(ap, format);
    while (*format != '\0')
    {

        
        if (*format == '%')
        {
            format++;
            switch(*format)
                case 'd':
                {
                    int value = va_arg(ap, int);
                    
                    if (value < 0 )
                    {
                        value *= -1;
                        _putchar(45);
                    }

                    if (value  != 0)
                    {
                        print_int(value);
                    }
                    else
                    {
                        _putchar('0');
                    }
                }
        }
        else
        {
            _putchar(*format);
        }

        format++;
    }
    va_end(ap);

    return (0);
}