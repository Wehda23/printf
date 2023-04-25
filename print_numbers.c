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

    if (!value)
        return (length);

    if ( number < 0 )
    {
        number *= -1;
        _putchar(45);
        length += 1;
    }

    if (number)
    {
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
    }
       
    return (length);
}



/**
 * print_uint - print u sign
 * @number: integer input.
 * Return: Nothing.
 */
void print_uint(unsigned int number)
{
    char this_value = number % 10 + '0';

    if (number > 0)
    {
        print_int(number / 10);
        putchar(this_value);
    }
}

/**
 * print_u - prints an integer %u.
 * @value: unsigned integer input.
 * Return: length of the digits as int.
 */
int print_u(unsigned int value)
{
    unsigned int number = value, length = 0;


    if (number)
    {
        if (number  != 0)
        {
            print_uint(number);
            
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

    if (!num)
        return (length);

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


/**
 * print_decimal - prints the decimals of a number.
 * @value: double input.
 * @decimals: integer input.
 * Return: length of printed numbers.
 */
int print_decimal(double value, int decimals, int force)
{
    int num, loop, length = 0;
    double number = value;

    if (!value)
        return (length);

    _putchar('.');
    length += 1;

    for (loop = 0; loop < decimals; loop++)
    {
        number *= 10;
        num = number;
        number -= num;
        if (number > 0)
            _putchar(num + '0');
        else if (force)
            _putchar(num + '0');
        
        length++;
    }
    
    return (length);
}

/**
 * print_f - is a function that prints double and float numbers.
 * @value: is an input of type double.
 * @Return: Length of printed sign and numbers.
 */
int print_f(double value, int decimals, int force)
{
    int length = 0, integers;
    double number = value, decimal_values;

    integers = value;

    if (!value)
        return (length);

    if (number < 0)
    {
        _putchar('-');
        length += 1;
        integers *= -1;
        number *= -1;
    }

    decimal_values = number - integers;

    length += print_d(integers);

    length += print_decimal(decimal_values, decimals, force);


    return (length);
}


/**
 * binary - prints the binary number of the interger input.
 * @value: integer input.
 * Return: Void nothing.  
 */
void binary(unsigned int value)
{
    char bi;
    if (value && value > 0)
    {
        binary(value / 2);

        bi = value % 2 + '0';

        _putchar(bi);

    }
}


/**
 * print_b - is a function that converts decimal to binary.
 * @value: integer input. 
 * Return: The length of the printed binary numbers. 
 */
int print_b(unsigned int value)
{   
    int length = 0, number;

    if (!value || value == 0)
        return (0);
    else
        number = value;

    while (number > 0)
    {
        number /= 2;
        length++;
    }

    number = value;

    binary(number);

    return (length);
}




/**
 * print_o - converts a unsigned int to a octadecimal.
 * @value: Unsigned int input. 
 * Return: length of printed value.
 */
int print_o(unsigned int value)
{
    unsigned int length = 0, index = 0, module;
    char buffer[32];

    if (!value)
        return (0);

    while (value > 0)
    {   
        module = value % 8;
        buffer[index] = module + '0';
        value /= 8;
        length++;
        index++;
    }

    while (index > 0)
    {
        _putchar(buffer[index--]);
    }

    _putchar(buffer[0]);

    return (length + 1);
}

/**
 * print_hexa - converts a unsigned int to a hexadecimal.
 * @value: Unsigned int input. 
 * Return: length of printed value.
 */
int print_hexa(unsigned int value, char c)
{
    unsigned int length = 0, index = 0, module;
    char buffer[32] , alpha = c == 'x'? 'a' : 'A';

    if (!value)
        return (0);

    while (value > 0)
    {   
        module = value % 16;
        buffer[index] = module < 10 ? module + '0' : (module - 10) + alpha;
        value /= 16;
        length++;
        index++;
    }

    while (index > 0)
    {
        _putchar(buffer[index--]);
    }

    _putchar(buffer[0]);

    return (length + 1);
}


