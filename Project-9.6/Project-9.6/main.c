/* Programmer: Gregory Mathews
   Subject: COP-1220
   Project: Chapter 9, Exercise 6 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Declare prototype for our double sorting function
void sort(double *a, double *b);

int main(void)
{
	// Declare and initialize type double vars
	double x, y, z;
	x = 3.3;
	y = 1.1;
	z = 2.2;

	// Display original variable values
	printf("Original values: x = %f, y = %f, z = %f\n", x, y, z);

	// Pass values to our sorting function as pointers
	sort(&x, &y);
	sort(&x, &z);
	sort(&y, &z);

	// Display sorted variable values
	printf("Sorted: x = %f, y = %f, z = %f", x, y, z);

	getchar();
	getchar();

	return 0;
}

// Define our sorting function
void sort(double *a, double *b)
{
	// Declare private variable for sorting work
	double dbl;

	// Compare values at pointer addresses and sort
	if (*a > *b)
	{
		dbl = *a;
		*a = *b;
		*b = dbl;
	}
}