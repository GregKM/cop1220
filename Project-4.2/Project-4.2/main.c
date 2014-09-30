/* Programmer: Gregory Mathews
	Project: Chapter 4, Exercise 2
	Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char first[30];
	char last[30];

	printf("Please enter your first name: ");
	scanf("%s", first);
	printf("Please enter your last name: ");
	scanf("%s", last);

	printf("\"%s, %s\"\n", last, first);

	printf("\"%20s, %s\"\n", last, first);

	printf("\"%-s, %-20s\"\n", last, first);

	printf("   %s, %s\n", last, first);

	getchar();
	getchar();

	return 0;
}