/* Project: Chapter 8, Exercise 5
   Programmer: Gregory Mathews
   Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	// Declare working variables
	int high, low, guess;
	char input;

	// Initialize variables
	high = 100;
	low = 1;
	guess = (high + low) / 2;

	printf("Enter a number between 1 and 100 and I will guess it.\n");
	printf("Use y for yes, h for too high, or l for too low.\n\n");

	// Print initial guess to the screen
	printf("Is %d your number?\n", guess);

	// Control loop checks that input character is not equal to y
	while ((input = getchar()) != 'y')
	{
		// Ignore the newline character transmitted by enter key
		if (input == '\n')
			continue;
		
		// Validate that input is correct for program choices
		if (input != 'h' && input != 'l')
		{
			printf("Invalid input. Please try again.");
			continue;
		}

		// Check if our guess is high or low and calculate new guess
		if (input == 'h')
			high = guess - 1;
		else
			if (input = 'l')
				low = guess + 1;
		guess = (high + low) / 2;

		// Ask user if our new guess is correct
		printf("Is %d your number?\n", guess);
	}

	printf("Got it!");

	getchar();
	getchar();

	return 0;
}