#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
        unsigned int index;
        char *memory = s, value = b;

        for (index = 0; index < n; index++)
	        memory[index] = value;

        return (memory);
}	
