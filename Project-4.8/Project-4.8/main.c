/* Programmer: Gregory Mathews
   Subject: COP-1220
   Project: Chapter 4, Exercise 8 */

#define _CRT_SECURE_NO_WARNINGS

#define CONGAL		3.785
#define CONMILE		1.609

#include <stdio.h>

int main(void)
{

	float miles = 0.0;
	float gallons = 0.0;
	float mpg = 0.0;
	float km = 0.0;
	float liter = 0.0;
	float lp100km = 0.0;

	printf("Enter miles traveled: ");
	scanf("%f", &miles);

	printf("Enter gallons consumed: ");
	scanf("%f", &gallons);

	mpg = miles / gallons;

	printf("\n\nMiles per gallon is %.1f\n", mpg);

	liter = CONGAL * gallons;
	km = CONMILE * miles;

	lp100km = 235.214583 / mpg;

	printf("That is %.1f liters per 100 km", lp100km);

	getchar();
	getchar();

	return 0;
}