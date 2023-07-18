#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 when completed
 */

int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("size of a char: %zu byte(s)\n", sizeof(c));
	printf("size of an int: %zu byte(s)\n", sizeof(i));
	printf("size of a long int: %zu byte(s)", sizeof(l));
	printf("size of a long long int: %zu byte(s)\n", sizeof(ll));
	printf("size of a float: %zu byte(s)\n", sizeof(f));

	return (0);
}
