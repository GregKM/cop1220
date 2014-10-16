/* Project: Chapter 7, Exercise 7
   Programmer: Gregory Mathews
   Subject: COP-1220 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define BASEPAY		10
#define NORMAL		40
#define OVERTIME	1.5
#define TIER1		300
#define TIER2		150
#define TAX1		0.15
#define TAX2		0.20
#define TAX3		0.25

int main(void)
{
	double hours, gross, net, tax;

	printf("Enter hours worked: ");
	scanf("%lf", &hours);

	// Calculate pay based on base pay and overtime rates for hours worked

	if (hours <= NORMAL)
	{
		gross = hours * BASEPAY;
	}
	else
	{
		gross = NORMAL * BASEPAY + (hours - NORMAL) * BASEPAY * OVERTIME;
	}

	// Figure out the amount of taxes owed based on the income tier

	if (gross <= TIER1)
	{
		tax = gross * TAX1;
	}
	else if (gross <= TIER1 + TIER2)
	{
		tax = TIER1 * TAX1 + (gross - TIER1) * TIER2;
	}
	else
	{
		tax = TIER1 * TAX1 + TIER2 * TAX2 + (gross - TIER1 - TIER2) * TAX3;
	}

	// Calculate net pay after tax deduction

	net = gross - tax;

	printf("Gross pay: $%.2f\nTotal tax: $%.2f\nNet pay: $%.2f", gross, tax, net);

	getchar();
	getchar();

	return 0;
}