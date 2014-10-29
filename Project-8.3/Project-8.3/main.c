/* Project: Chapter 8, Exercise 3
   Programmer: Gregory Mathews
   Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;
	int upper;
	int lower;
	int other;

	upper = lower = other = 0;

	while ((ch = getchar()) != EOF)
		if (isupper(ch))
			upper++;
		else
			if (islower(ch))
				lower++;
			else
				other++;

	printf("%d uppercase letters\n%d lowercase letters\n%d other characters", upper, lower, other);

	return 0;
}