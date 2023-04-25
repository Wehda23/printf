#include "main.h"

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
            if (*format == 'c' || *format == 's' || *format == 'r' || *format == '%' || *format == 'R')
                    length += string_handler(format, ap);
            else if (*format == 'd' || *format == 'f' || *format == 'b' || *format == 'i' )
                    length += digits_handler(format, ap);
            else if (*format == 'o' || *format == 'x' || *format == 'X' || *format == 'u')
                    length += digits_handler(format, ap);
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