/* Programmer: Gregory Mathews
	Project: Chapter 3, Exercise 2
	Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ascii;

	printf("Please enter an ASCII code: ");
	scanf("%d", &ascii);
	printf("You entered %d. That is %c.\n", ascii, ascii);

	getchar();
	getchar();
	getchar();

	return 0;
}