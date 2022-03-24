#include "main.h"

/**
 * base10 - power in 10 base
 * @n: an exponent
 * Return: returns 10 to power exponent
 */
void print_number(int n)
 {
 unsigned int n1;

 n1 = n;

 if (n < 0)
 {
 _putchar('-');
 n1 = -n;
 }

 if (n1 / 10 != 0)
 {
 print_number(n1 / 10);
 }
 _putchar((n1 % 10) + '0');
 }
