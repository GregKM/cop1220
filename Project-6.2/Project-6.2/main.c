/* Project: Chapter 6, Exercise 2
	Programmer: Gregory Mathews
	Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
	int out, in;

	for (out = 0; out < 5; ++out)
	{
		for (in = 0; in < out + 1; ++in)
		{
			printf("$");
		}
		printf("\n");
	}

	getchar();

	return 0;
}