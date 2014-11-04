/* Programmer: Gregory Mathews
   Project: Chapter 9, Exercise 3
   Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

// Declare our function prototype to print character in columns and rown
void printfunc(char ch, int c, int r);
int main(void)
{
	// Declare vars for character and number of columns and rows
	char ch;
	int column;
	int row;

	// Ask user for input
	printf("Enter a character (# to quit): ");
	
	// Control loop to check that quit symbol has not been entered
	while ((ch = getchar()) != '#')
	{
		// Ignore new line
		if (ch == '\n')
			continue;
		// Ask user for columns
		printf("Number of columns? ");
		// Use scanf to get input from user, validate, and store in column variable
		if (scanf("%d", &column) != 1)
			break;
		// Use scanf to get input from user, valdate, and store in row variable
		printf("Number of rows? ");
		if (scanf("%d", &row) != 1)
			break;
		// Call our print function and pass the values stored for character, columns, and rows
		printfunc(ch, column, row);
		printf("\nEnter next character (# to quit): ");
	}

	return 0;
}

// Define our function for printing characters in columns and rows
void printfunc(char ch, int c, int r)
{
	// Private vars for our function to use
	int col, row;

	// Initialze row to 0, execute loop, and increment until while row is less than rows supplied by user
	for (row = 0; row < r; row++)
	{
		// Initialize col to 0, execute loop, and increment while col is less than columns supplied by user
		for (col = 0; col < c; col++)
			// Use purchar to print character
			putchar(ch);
		putchar('\n');
	}
	
	// Terminate function and return control to calling function
	return;
}