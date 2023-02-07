#ifndef MAIN_H
#define MAIN_H
/**
 * main.h -header file that contains the prototypes
           of functions used in 0x14-bit_manipulation directory
 * Return :nothing
*/
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _atoi(const char *s);
int _putchar(char c);
#endif 
