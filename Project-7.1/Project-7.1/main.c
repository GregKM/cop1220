/* Project: Chapter 7, Exercise 1
=  Programmer: Gregory Mathews
   Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int spacecnt, newlinecnt, othercnt;		// declare counter variables
	char ch;								// decare character variable

	spacecnt = newlinecnt = othercnt = 0;	// initialize counters
	ch = 0;

	printf("Please enter a character. Use # to quit.\n");
	while ((ch = getchar()) != '#')			// loop until # is encountered
	{
		if (ch == ' ')						// look for space and increment
			spacecnt ++;
		else if (ch == '\n')				// look for newline and increment
			newlinecnt ++;
		else								// all other characters incremented
			othercnt ++;
	}

	printf("There are %d spaces\n%d new lines\n%d other characters", spacecnt, newlinecnt, othercnt);

	getchar();
	getchar();

	return 0;
}