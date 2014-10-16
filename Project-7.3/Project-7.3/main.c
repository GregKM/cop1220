/* Project: Chapter 7, Exercise 3
   Programmer: Gregory Mathews
   Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	// Declare variables for working storage
	int num, evens, odds;
	double totaleven, totalodd;

	// Initialize variables
	num = evens = odds = 0;
	totaleven = totalodd = 0.0;

	//Use printf function to ask for input
	printf("Please enter some numbers.\nI will report the total number of odds and evens\nand give their averages (0 to quit):\n");

	// Control loop using the scanf function to read numeric input while not equal to 0
	while (scanf("%d", &num) == 1 && num != 0)
	{
		// Use if/else to check if number is even or odd using modulus then sum and increment variables
		if (num % 2 == 1)
		{
			totalodd += num;
			++odds;
		}
		else
		{
			totaleven += num;
			++evens;
		}
	}

	// Use printf function to show total even numbers
	printf("Total even numbers: %d\n", evens);
	// Use printf funtion to show even number average only if greater than 0 to avoid division by 0
	if (evens > 0)
		printf("Average of even numbers : %g\n", totaleven / evens);

	// Use printf funtion to show total odd numbers
	printf("Total odd numbers: %d\n", odds);
	// Verify that we are not going to try and divide by 0
	if (odds > 0)
		printf("Average of odd numbers: %g\n", totalodd / odds);

	getchar();
	getchar();

	return 0;
}