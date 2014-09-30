/* Programmer: Gregory Mathews
	Project: Chapter 5, Exercise 7
	Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void cube(double n);

int main(void)
{
	double dbl;

	printf("Please enter a number of type double: ");
	scanf("%lf", &dbl);
	cube(dbl);

	getchar();
	getchar();

	return 0;
}

void cube(double n)
{
	printf("Your number cubed is %lf", n*n*n);
}