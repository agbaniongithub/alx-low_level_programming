#include "main.h"
/**
 * reset_to_98 - This function takes a pointer to an int as parameter and updates the value it points to to 98.
 * @n: pointer
 * @a: variable we are pointing to
 */

void reset_to_98(int *n)
{
int a = 40;
int *n = &a;
*n = 98;
}
