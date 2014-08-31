/* COP-1220 -- Chapter 2, Exercise 1
	Gregory Mathews
	This program uses printf() to format first and last name
	on lines in different ways.*/

#include <stdio.h>

int main(void)
{
	printf("Gregory Mathews\n");	// Prints first and last name on one line
	printf("Gregory\nMathews\n");	// Prints first and last name on two seperate lines
	printf("Gregory ");				// Prints first and last name on two seperate lines using two printf() calls
	printf("Mathews");

	getchar();						// Makes the program wait for a key press

	return 0;
}