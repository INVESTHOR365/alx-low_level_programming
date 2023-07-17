#include <stdio.h>

/**
 *main - entry point
 *
 *Return: 0 if successful
*/
 int main(void)
{
     	printf("size of the char: %lu byte(s)", sizeof (char));
	printf("size of the int: %lu byte(s)", sizeof (int));
	printf("size of the long int: %lu byte(s)", sizeof (long int));
	printf("size of the long long int: %lu byte(s)", sizeof (long long int));
	printf("size of the float: %lu byte(s)", sizeof (float));
	return (0);
}
