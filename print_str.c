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


/**
 * print_r - prints a string in reverse.
 * @c: pointer to a string. 
 * Return: length of the printed string. 
 */
int print_r(char *c)
{
    int index = 0, length = 0;

    if (c)
    {
        while (c[index++]);

        index -= 1;

        length = index;
        
        while (index >= 0)
        {
            _putchar(c[index--]);
        }
    }
    

    return (length);
}




/**
 * rot13 - ciphers a string.
 * @c: Input string character.
 * Return: char. 
 */
char rot13(char c) {
    if (isalpha(c)) {
        char base = isupper(c) ? 'A' : 'a';
        return (c - base + 13) % 26 + base;
    } else {
        return c;
    }
}

/**
 * print_R - print string ciphered in rot13 way.
 * @c: Pointer to a string.
 * Return: Length of printed string.
 */
int print_R(char *c)
{
    int length = 0;

    if (c)
    {
        while (*c != '\0') 
        {
        _putchar(rot13(*c));
        c++;
        length++;
        }
    }

    return (length);
}