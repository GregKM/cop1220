/* Programmer: Gregory Mathews
	Project: Chapter 3, Exercise 2
	Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int CodeVal;

	printf("Please enter an ASCII code value: ");
	scanf("%d", &CodeVal);
	printf("You entered %d. That value is associated with %c.\n", CodeVal, CodeVal);

	getchar();
	getchar();

	return 0;
}