/* Programmer: Gregory Mathews
   Subject: COP-1220
   Project: P10 - Chapter 11 String Program */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// Define the size constant for our array
#define SIZE 100

// Declare the foundwithin function
int foundwithin(char * str, char c);
int main(void)
{
	// Decare our array and working variables
	char words[SIZE];
	char ch;
	int test;

	// Ask user to enter a string of characters
	printf("Please enter some text (Enter to quit): ");

	// Use while to get the user text and store it in the array so long and check for null
	while (gets(words) && words[0] != '\0')
	{
		// Ask user for character to compare to string
		printf("Please enter a character: ");
		// Use getchar() to store char in ch variable
		ch = getchar();
		// Use while to check for new line, otherwise continue
		while (getchar() != '\n')
			continue;
		// Call our comparison function and set our test variable equal to the return value
		test = foundwithin(words, ch);
		// Check if the return from our function is true or false and let user know the result
		if (test == 0)
			printf("%c not found. :(\n", ch);
		else
			printf("%c found! :)\n", ch);
		// Get a new string of characters from the user
		printf("Please enter more text (Enter to quit): ");
	}

	return 0;

}
// Prototype our function
int foundwithin(char * str, char ch)
{
	// Use while to loop through the string and check for the entered character and null
	while (*str != ch && *str != '\0')
		str++;
	// Return either 0 (not found) or non-zero (found)
	return *str;
}