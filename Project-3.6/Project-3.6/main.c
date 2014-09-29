/* Programmer: Gregory Mathews
	Project: Chapter 3, Exercise 6
	Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float WaterQuart;
	float WaterMolecule;

	float MoleculeGrams = 950;
	float QuartGrams = 3.0e-23;

	printf("Please enter an amount of water in quarts. ");
	scanf("%f", &WaterQuart);

	WaterMolecule = WaterQuart * MoleculeGrams / QuartGrams;

	printf("There are %e molecules in %f quarts.\n", WaterMolecule, WaterQuart);

	getchar();
	getchar();

	return 0;
}