/* Programmer: Gregory Mathews
	Project: Chapter 3, Exercise 6
	Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float quart;
	float molecule;

	float mgrams = 950;
	float qgrams = 3.0e-23;

	printf("Enter water in quarts: ");
	scanf("%f", &quart);

	molecule = quart * mgrams /	qgrams;

	printf("There are %e molecules in %f quarts.\n", molecule, quart);

	getchar();
	getchar();

	return 0;
}