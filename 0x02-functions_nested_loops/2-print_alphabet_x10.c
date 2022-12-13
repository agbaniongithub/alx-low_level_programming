#include "main.h"

/**
 * print_alphabet_x10 -prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
int ten;
char alphabet;
for (ten = 0; ten <= 9; ten++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{_putchar(alphabet);
_putchar('\n');
}
}
}
