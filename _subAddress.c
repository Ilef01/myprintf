#include "main.h"
#include <stdarg.h>

/**
 * _subAddress - Prints the next memory address found in the va_list of
 *                  arguments provided.
 * @allargs: The va_list that contains the address to be printed.
 * @charCount: Pointer to the number of chars that have been printed so far.
 * Description: Prints the address found in the va_list of
 *              arguments provided.
 */
void _subAddress(va_list allargs, int *charCount)
{
	int address = va_arg(allargs, int); /* get the address */
	char charaddress; /* the digit converted to char */

		chardigit = digit + '0'; /* the conversion from int to char */
		_putchar (chardigit);
		(*charCount)++;
}
