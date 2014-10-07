/* Project: Chapter 6, Exercise 1
	Programmer: Gregory Mathews
	Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE 26
int main(void)
{
	char letters[SIZE];
	int index;

	for (index = 0; index < SIZE; index++)
		letters[index] = 'a' + index;
	for (index = 0; index < SIZE; index++)
		printf("%c", letters[index]);

	getchar();

	return 0;
}