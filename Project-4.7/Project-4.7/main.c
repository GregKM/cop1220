/* Programmer: Gregory Mathews
	Project: Chapter 4, Exercise 7
	Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>

int main()
{
	double dbl = 1.0/3.0;
	float flt = 1.0/3.0;

	printf("Double: %.4f, %.12f, %.16f\n", dbl, dbl, dbl);
	printf("Float: %.4f, %.12f, %.16f\n", flt, flt, flt);

	printf("Double precision = %d digits\n", DBL_DIG);
	printf("Float precision = %d digits\n", FLT_DIG);

	getchar();

	return 0;
}