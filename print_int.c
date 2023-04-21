#include "main.h"

/**
 * print_int - print d sign
 * @number: integer input.
 * Return: Nothing.
 */
void print_int(int number)
{
    char this_value = number % 10 + '0';

    if (number > 0)
    {
        print_int(number / 10);
        putchar(this_value);
    }
}

/**
 * print_d - prints an integer %d.
 * @value: integer input.
 * Return: length of the digits as int.
 */
int print_d(int value)
{
    int number = value, length = 0;

    print_int(number);

    while (number != 0)
    {
        length += 1;
        number /= 10;
    }
    
    return (length);
}