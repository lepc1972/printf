#ifndef PRINTF
#define PRINTF
#include <stdio.h>

/* */
int print_integer(va_list pa);
/* */
int print_character(va_list pa);
/* */
int print_string(va_list pa);
/* */
int _printf(const char *format, ...);
/* */
int _putchar(char c);
/* */
int fun_bin(va_list pa);

#endif /*PRINTF*/

