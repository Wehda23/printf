#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>

int _putchar(char c);
int print_d(int value);
int print_s(char *s);
int print_i(int num);
int print_f(double value, int decimals, int force);
int print_b(int value);
int print_r(char *c);
int print_R(char *c);
int string_handler(const char *p, va_list ap);
int digits_handler(const char *p, va_list ap);
int others_handler(const char *p, va_list ap);
int _printf(const char *format, ...);


#endif