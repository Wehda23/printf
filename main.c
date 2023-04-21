#include "main.h"



int main(void)
{

    int len;

    len = _printf("Waheed is age: %d\n",1000);

    printf(" The value is %d\n", len);
    _printf("%caheed\n", 'W');
    _printf("%%c aheed\n",'W');
    _printf("%s Khaled\n","Waheed");
    _printf("This is Hexadecimal %i\n", 0x7B);
    _printf("This is octadecimal %i\n", 0123);
    return (0);
}