/* Programmer: Gregory Mathews
   Project: P10, Part 2 - Echo and reverse command line arguments
   Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS

// Define our max string length
#define MAX 100

#include<stdio.h>

// Prototype our function to reverse a string
void revstr(char *begin, char *end)
{
	char tmp;
	while (begin < end)
	{
		tmp = *begin;
		*begin++ = *end;
		*end-- = tmp;
	}
}


// Prototype our funtion to reverse words
void revwords(char *str)
{
	char *start = str;
	// Used for bounds checking
	char *tmp = str;

	// Use while to check bounds and loop through string to reverse
	while (*tmp)
	{
		tmp++;
		// Check for null
		if (*tmp == '\0')
		{
			// Call our function to reverse a string
			revstr(start, tmp - 1);
		}
		else if (*tmp == ' ')
		{
			revstr(start, tmp - 1);
			start = tmp + 1;
		}
	}

	revstr(str, tmp - 1);
}

// Main program function and logic
int main(void)
{
	// Ask user to enter a string
	printf("Enter some text: \n");
	// Declare our array and limit to MAX size
	char str[MAX];
	// Use gets() to grab input and store in array
	gets(str);
	// Set address of temp to str value for our function
	char *temp = str;
	// Call our funtion to reverse the words
	revwords(str);
	// Use puts() to display our reversed string on screen
	puts(str);
	// Stop console from exiting automatically
	getchar();
	
	return 0;
}