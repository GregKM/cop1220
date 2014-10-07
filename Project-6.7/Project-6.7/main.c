/* Project: Chapter 6, Exercise 7
	Programmer: Gregory Mathews
	Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS		// required by Visual Studio

#include <stdio.h>
#include <string.h>
#define SIZE 20						// set array size constant
int main(void)
{
	char word[SIZE];				// create array for our word
	char last, x;					// create variables for reversing

	printf("Enter a word: ");

	scanf("%s", word);				// get our word as a string

	last = strlen(word) - 1;		// remember to account for null

	for (x = last; x >= 0; --x)		// loop to print word in reverse
	{
		printf("%c", word[x]);
	}

	getchar();
	getchar();

	return 0;
}