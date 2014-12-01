/* Programmer: Gregory Mathews
	Project: Chapter 3, Exercise 7
	Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float inches;
	float cent;

	printf("Please enter your height in inches: ");
	scanf("%f", &inches);

	cent = inches * 2.54;

	printf("Your height in centimeters is %f\n", cent);

	getchar();
	getchar();

	return 0;
}