#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int largest_number(int a, int b, int c)
{
        int largest;
if (a > b)
{
if (b > c)
largest = a;
else if (a > c)
largest = a;
}
else
{
if (b < c)
largest = c;
else
largest = b;
return(largest)
}
}
