/* Project: Chapter 7, Exercise 2
   Programmer: Gregory Mathews
   Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char ch = 0;			// declare character variable
	int charcnt = 0;		// declare character counter variable

	while ((ch = getchar()) != '#')
		if (charcnt <= 8)
		{
			charcnt++;
			printf("%c, %d; ", ch, ch);
		}
		else
		{
			printf("\n");
		}

		getchar();
		getchar();

		return 0;
}