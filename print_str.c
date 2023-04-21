#include "main.h"

/**
 * print_s - is a function used to print a string.
 * @s: Pointer to a string character. 
 * Return: Returns the length of string as an int.
 */
int print_s(char *s)
{
    int length = 0;

    if (s)
    {
        for (; *s ; s++)
        {
            _putchar(*s);
            length++;
        }
    }
    return (length);
}