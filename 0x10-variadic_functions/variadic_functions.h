#ifndef _VARIADIC_FUNCTIONS
#define _VARIADIC_FUNCTIONS_
/**
 * Desc: Header file containing prototypes for all functions
 *        used in the 0x0F-variadic_functions directory.
*/
#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
