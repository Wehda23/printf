#include "main.h"



void print_int(int number)
{
    char this_value = number % 10 + '0';

    if (number > 0)
    {
        print_int(number / 10);
        _putchar(this_value);
    }
}