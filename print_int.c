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

    if ( number < 0 )
    {
        number *= -1;
        _putchar(45);
        length += 1;
    }

    if (number  != 0)
    {
        print_int(number);
        
        while (number != 0)
        {
            length += 1;
            number /= 10;
        }
    }
    else
    {
        _putchar('0');
        length += 1;
    }
    
    
    return (length);
}


/**
 * print_i - prints hexa octa decimals etc.. 
 * @num: Integer input.
 * Return: length of printed string. 
 */
int print_i(int num) 
{
    int length = 0;
    int base = 10;
    char buffer[32];
    int i = 0;
    int is_negative = 0;

    if (num == 0) {
        putchar('0');
        length = 1;
        return length;
    }
   
    if (num < 0) {
        is_negative = 1;
        num = -num;
    }

    if (num >= 0x10000000) {
        base = 16;
        buffer[i++] = '0';
        buffer[i++] = 'x';
    } else if ((num & 0x400000) != 0) {
        base = 8;
        buffer[i++] = '0';
    }

    while (num != 0) {
        int rem = num % base;
        buffer[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
        num /= base;
    }

    if (is_negative) {
        putchar('-');
        length++;
    }

    while (i > 0) {
        putchar(buffer[--i]);
        length++;
    }

    return (length);
}