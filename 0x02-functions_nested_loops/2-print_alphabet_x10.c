#include "main.h"

void print_alphabet_x10(void)
{
char alpha, co;

co = 0;

while (co < 10)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar (alpha);
}
co++;
_putchar('\n');
}
