#include <stdio.h>
/**
 * main - A program to output the size of data types
 * Return: 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s) long\n", sizeof(a));
	printf("Size of an int: %lu byte(s) long\n", sizeof(b));
	printf("Size of a long int: %lu byte(s) long\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s) long\n", sizeof(d));
	printf("Size of a float: %lu byte(s) long\n", sizeof(f));
	return (0);
}
