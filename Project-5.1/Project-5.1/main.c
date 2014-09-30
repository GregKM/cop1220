/* Programmer: Gregory Mathews
	Project: Ch 5, Exercise 1
	Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	const int MINPERHOUR = 60;
	int minutes, hours, left;

	printf("Enter the number of minutes: ");
	scanf("%d", &minutes);
	while (minutes > 0)
	{
		hours = minutes / MINPERHOUR;
		left = minutes % MINPERHOUR;
		printf("%d minutes = %d hours, %d minutes\n", minutes, hours, left);
		printf("Enter next value (<=0 to quit): ");
		scanf("%d", &minutes);
	}
	printf("Done!\n");

	return 0;
}