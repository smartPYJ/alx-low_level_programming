#include "main.h"

/**
* print_numbers - print the numbers from 0 to 9
* @ch; variable to hold numbers
* Return: void
*/

void print_numbers(void)
{
char ch;
for (ch = 0; ch <= 9; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
