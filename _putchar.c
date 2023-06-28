#include <unistd.h>

/**
 * _puthchar;- write the character C to stdout
 * the character to print
 * 
 * return: on success 1.
 * on error, -1 is returned and errno is set
 * 
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
