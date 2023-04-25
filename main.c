#include "main.h"



int main(void)
{

    int len;
    unsigned int l = 1230;

    len = _printf("Waheed is age: %d\n",1000);

    printf(" The value is %d\n", len);
    _printf(" The value is %d\n", len);
    _printf("%caheed\n", 'W');
    _printf("%%c aheed\n",'W');
    _printf("%s Khaled\n","Waheed");
    _printf("This is Hexadecimal %i\n", 0x7B);
    _printf("This is octadecimal %i\n", 0123);
    _printf("This a float printed number %f\n", 9.1231);
    _printf("This a binary printed number %b\n", 98);
    _printf("Print the followin string in Reverse %r\n", "Reverse string");
    len = _printf("%R", "Hello, World!\n");
    _printf(" The value is %d\n", len);
    _printf(" This is unsigned integer print: %u\n", l);
    len = _printf(" This is unsigned integer print hexadecimal: %o\n", (unsigned int) 1568547);
    _printf(" The value is %d\n", len);
    _printf(" The value is %x\n", 1222);
    _printf(" The value is %X\n", 1222);






    return (0);
}