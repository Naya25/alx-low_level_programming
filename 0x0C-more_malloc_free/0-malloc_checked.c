#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked-allocate memory using malloc
 * @b: no of bytes to allocate
 *
 * return a pointer to the allocated
 */

void *malloc_checked(unsigned int b)

{
	void *ptr;

	ptr = malloc(b);


	if (ptr == NULL)

		exit(98);


	return (ptr);

}
