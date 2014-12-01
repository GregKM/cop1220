/* Programmer: Gregory Mathews
   Subject: COP-1220
   Project: Programming Project - Ticket Sales Tracker
			Program tracks ticket sales by month and section */

#define _CRT_SECURE_NO_WARNINGS
// constants for section price levels
#define T1 40
#define T2 27
#define T3 15
#define T4 10

#include <stdio.h>

int main(void)
{
	// vars to calculate sales
	int monthtotal = 0;
	int alltotal = 0;
	int allsold = 0;
	int monthsold = 0;
	int orcsold = 0;
	int mezsold = 0;
	int gensold = 0;
	int balsold = 0;
	int orctotal = 0;
	int meztotal = 0;
	int gentotal = 0;
	int baltotal = 0;
	// 3 dimensional double array to store month, section, and tickets sold
	int arr[12][4][1] = { 0, 0, 0 };
	// selection var
	int selection;
	int section;

		printf("This program will calculate total ticket sales per month and by section.\n\n");
		printf("Press 1-12 to select a month. Jan = 1, Feb = 2, etc. 0 for totals.\n");
		printf("Month (1 - 12)(0 for totals): ");
		//get user input for month
		scanf("%d", &selection);
		// control loop for main logic
		while (selection <= 12 && selection >=0)
			// use nested if else to select correct month, get ticket sales, and increment correct array positions
			if (selection == 1)
			{
			printf("You selected January.\n");
			printf("Please enter number of Orchestra tickets sold: ");
			scanf("%d", &arr[0][0][0]);

			printf("Please enter number of Mezzanine tickets sold: ");
			scanf("%d", &arr[0][1][0]);

			printf("Please enter the number of General tickets sold: ");
			scanf("%d", &arr[0][2][0]);

			printf("Please enter the number of Balcony tickets sold: ");
			scanf("%d", &arr[0][3][0]);

			printf("\nOrchestra = %d, Mezzanine = %d, General = %d, Balcony = %d", arr[0][0][0], arr[0][1][0], arr[0][2][0], arr[0][3][0]);

			// get data for the next month and continue looping
			printf("\nEnter next month (1-12)(0 for totals): ");
			scanf("%d", &selection);
			}

			else
				if (selection == 2)
				{
				printf("You selected February.\n");
				printf("Please enter number of Orchestra tickets sold: ");
				scanf("%d", &arr[1][0][0]);

				printf("Please enter number of Mezzanine tickets sold: ");
				scanf("%d", &arr[1][1][0]);

				printf("Please enter the number of General tickets sold: ");
				scanf("%d", &arr[1][2][0]);

				printf("Please enter the number of Balcony tickets sold: ");
				scanf("%d", &arr[1][3][0]);

				printf("\nOrchestra = %d, Mezzanine = %d, General = %d, Balcony = %d", arr[1][0][0], arr[1][1][0], arr[1][2][0], arr[1][3][0]);

				printf("\nEnter next month (1-12)(0 for totals): ");
				scanf("%d", &selection);
				}

			else
				if (selection == 3)
				{
				printf("You selected March.\n");
				printf("Please enter number of Orchestra tickets sold: ");
				scanf("%d", &arr[2][0][0]);

				printf("Please enter number of Mezzanine tickets sold: ");
				scanf("%d", &arr[2][1][0]);

				printf("Please enter the number of General tickets sold: ");
				scanf("%d", &arr[2][2][0]);

				printf("Please enter the number of Balcony tickets sold: ");
				scanf("%d", &arr[2][3][0]);

				printf("\nOrchestra = %d, Mezzanine = %d, General = %d, Balcony = %d", arr[2][0][0], arr[2][1][0], arr[2][2][0], arr[2][3][0]);

				printf("\nEnter next month (1-12)(0 for totals): ");
				scanf("%d", &selection);
				}

			else
				if (selection == 4)
				{
				printf("You selected April.\n");
				printf("Please enter number of Orchestra tickets sold: ");
				scanf("%d", &arr[3][0][0]);

				printf("Please enter number of Mezzanine tickets sold: ");
				scanf("%d", &arr[3][1][0]);

				printf("Please enter the number of General tickets sold: ");
				scanf("%d", &arr[3][2][0]);

				printf("Please enter the number of Balcony tickets sold: ");
				scanf("%d", &arr[3][3][0]);

				printf("\nOrchestra = %d, Mezzanine = %d, General = %d, Balcony = %d", arr[3][0][0], arr[3][1][0], arr[3][2][0], arr[3][3][0]);

				printf("\nEnter next month (1-12)(0 for totals): ");
				scanf("%d", &selection);
				}

			else
				if (selection == 5)
				{
				printf("You selected May.\n");
				printf("Please enter number of Orchestra tickets sold: ");
				scanf("%d", &arr[4][0][0]);

				printf("Please enter number of Mezzanine tickets sold: ");
				scanf("%d", &arr[4][1][0]);

				printf("Please enter the number of General tickets sold: ");
				scanf("%d", &arr[4][2][0]);

				printf("Please enter the number of Balcony tickets sold: ");
				scanf("%d", &arr[4][3][0]);

				printf("\nOrchestra = %d, Mezzanine = %d, General = %d, Balcony = %d", arr[4][0][0], arr[4][1][0], arr[4][2][0], arr[4][3][0]);

				printf("\nEnter next month (1-12)(0 for totals): ");
				scanf("%d", &selection);
				}

			else
				if (selection == 6)
				{
				printf("You selected June.\n");
				printf("Please enter number of Orchestra tickets sold: ");
				scanf("%d", &arr[5][0][0]);

				printf("Please enter number of Mezzanine tickets sold: ");
				scanf("%d", &arr[5][1][0]);

				printf("Please enter the number of General tickets sold: ");
				scanf("%d", &arr[5][2][0]);

				printf("Please enter the number of Balcony tickets sold: ");
				scanf("%d", &arr[5][3][0]);

				printf("\nOrchestra = %d, Mezzanine = %d, General = %d, Balcony = %d", arr[5][0][0], arr[5][1][0], arr[5][2][0], arr[5][3][0]);

				printf("\nEnter next month (1-12)(0 for totals): ");
				scanf("%d", &selection);
				}
	
			else
				if (selection == 7)
				{
					printf("You selected July.\n");
					printf("Please enter number of Orchestra tickets sold: ");
					scanf("%d", &arr[6][0][0]);

					printf("Please enter number of Mezzanine tickets sold: ");
					scanf("%d", &arr[6][1][0]);

					printf("Please enter the number of General tickets sold: ");
					scanf("%d", &arr[6][2][0]);

					printf("Please enter the number of Balcony tickets sold: ");
					scanf("%d", &arr[6][3][0]);

					printf("\nOrchestra = %d, Mezzanine = %d, General = %d, Balcony = %d", arr[6][0][0], arr[6][1][0], arr[6][2][0], arr[6][3][0]);

					printf("\nEnter next month (1-12)(0 for totals): ");
					scanf("%d", &selection);
				}

			else
				if (selection == 8)
				{
					printf("You selected August.\n");
					printf("Please enter number of Orchestra tickets sold: ");
					scanf("%d", &arr[7][0][0]);

					printf("Please enter number of Mezzanine tickets sold: ");
					scanf("%d", &arr[7][1][0]);

					printf("Please enter the number of General tickets sold: ");
					scanf("%d", &arr[7][2][0]);

					printf("Please enter the number of Balcony tickets sold: ");
					scanf("%d", &arr[7][3][0]);

					printf("\nOrchestra = %d, Mezzanine = %d, General = %d, Balcony = %d", arr[7][0][0], arr[7][1][0], arr[7][2][0], arr[7][3][0]);

					printf("\nEnter next month (1-12)(0 for totals): ");
					scanf("%d", &selection);
				}

			else
				if (selection == 9)
				{
					printf("You selected September.\n");
					printf("Please enter number of Orchestra tickets sold: ");
					scanf("%d", &arr[8][0][0]);

					printf("Please enter number of Mezzanine tickets sold: ");
					scanf("%d", &arr[8][1][0]);

					printf("Please enter the number of General tickets sold: ");
					scanf("%d", &arr[8][2][0]);

					printf("Please enter the number of Balcony tickets sold: ");
					scanf("%d", &arr[8][3][0]);

					printf("\nOrchestra = %d, Mezzanine = %d, General = %d, Balcony = %d", arr[8][0][0], arr[8][1][0], arr[8][2][0], arr[8][3][0]);

					printf("\nEnter next month (1-12)(0 for totals): ");
					scanf("%d", &selection);
				}

			else
				if (selection == 10)
				{
					printf("You selected October.\n");
					printf("Please enter number of Orchestra tickets sold: ");
					scanf("%d", &arr[9][0][0]);

					printf("Please enter number of Mezzanine tickets sold: ");
					scanf("%d", &arr[9][1][0]);

					printf("Please enter the number of General tickets sold: ");
					scanf("%d", &arr[9][2][0]);

					printf("Please enter the number of Balcony tickets sold: ");
					scanf("%d", &arr[9][3][0]);

					printf("\nOrchestra = %d, Mezzanine = %d, General = %d, Balcony = %d", arr[9][0][0], arr[9][1][0], arr[9][2][0], arr[9][3][0]);

					printf("\nEnter next month (1-12)(0 for totals): ");
					scanf("%d", &selection);
				}

			else
				if (selection == 11)
				{
					printf("You selected November.\n");
					printf("Please enter number of Orchestra tickets sold: ");
					scanf("%d", &arr[10][0][0]);

					printf("Please enter number of Mezzanine tickets sold: ");
					scanf("%d", &arr[10][1][0]);

					printf("Please enter the number of General tickets sold: ");
					scanf("%d", &arr[10][2][0]);

					printf("Please enter the number of Balcony tickets sold: ");
					scanf("%d", &arr[10][3][0]);

					printf("\nOrchestra = %d, Mezzanine = %d, General = %d, Balcony = %d", arr[10][0][0], arr[10][1][0], arr[10][2][0], arr[10][3][0]);

					printf("\nEnter next month (1-12)(0 for totals): ");
					scanf("%d", &selection);
				}

			else
				if (selection == 12)
				{
					printf("You selected December.\n");
					printf("Please enter number of Orchestra tickets sold: ");
					scanf("%d", &arr[11][0][0]);

					printf("Please enter number of Mezzanine tickets sold: ");
					scanf("%d", &arr[11][1][0]);

					printf("Please enter the number of General tickets sold: ");
					scanf("%d", &arr[11][2][0]);

					printf("Please enter the number of Balcony tickets sold: ");
					scanf("%d", &arr[11][3][0]);

					printf("\nOrchestra = %d, Mezzanine = %d, General = %d, Balcony = %d", arr[11][0][0], arr[11][1][0], arr[11][2][0], arr[11][3][0]);

					printf("\nEnter next month (1-12)(0 for totals): ");
					scanf("%d", &selection);
				}
				
			else
				if (selection == 0)
				// sum totals for tickets sold per section
				{
				orcsold = arr[0][0][0];
				mezsold = arr[0][1][0];
				gensold = arr[0][2][0];
				balsold = arr[0][3][0];
				// calculate revenue per section based on section price constants
				orctotal = orcsold * T1;
				meztotal = mezsold * T2;
				gentotal = gensold * T3;
				baltotal = balsold * T4;
				// calculate monthly total tickets sold and monthly total revenue
				monthsold = orcsold + mezsold + gensold + balsold;
				monthtotal = orctotal + meztotal + gentotal + baltotal;
				// add monthly totals to yearly totals for tickets sold and revenue
				allsold += monthsold;
				alltotal += monthtotal;
				// print breakdown of each months sales and revenue
				printf("January sales by section:\nOrchestra: %d - $%d\nMezzanine: %d - $%d\nGeneral: %d - $%d\nBalcony: %d - $%d\n\n",
					orcsold, orctotal, mezsold, meztotal, gensold, gentotal, balsold, baltotal);
				printf("January total sales:\n%d tickets for $%d\n\n", monthsold, monthtotal);

				orcsold = arr[1][0][0];
				mezsold = arr[1][1][0];
				gensold = arr[1][2][0];
				balsold = arr[1][3][0];

				orctotal = orcsold * T1;
				meztotal = mezsold * T2;
				gentotal = gensold * T3;
				baltotal = balsold * T4;

				monthsold = orcsold + mezsold + gensold + balsold;
				monthtotal = orctotal + meztotal + gentotal + baltotal;

				allsold += monthsold;
				alltotal += monthtotal;

				printf("February sales by section:\nOrchestra: %d - $%d\nMezzanine: %d - $%d\nGeneral: %d - $%d\nBalcony: %d - $%d\n\n",
					orcsold, orctotal, mezsold, meztotal, gensold, gentotal, balsold, baltotal);
				printf("February total sales:\n%d tickets for $%d\n\n", monthsold, monthtotal);

				orcsold = arr[2][0][0];
				mezsold = arr[2][1][0];
				gensold = arr[2][2][0];
				balsold = arr[2][3][0];

				orctotal = orcsold * T1;
				meztotal = mezsold * T2;
				gentotal = gensold * T3;
				baltotal = balsold * T4;

				monthsold = orcsold + mezsold + gensold + balsold;
				monthtotal = orctotal + meztotal + gentotal + baltotal;

				allsold += monthsold;
				alltotal += monthtotal;

				printf("March sales by section:\nOrchestra: %d - $%d\nMezzanine: %d - $%d\nGeneral: %d - $%d\nBalcony: %d - $%d\n\n",
					orcsold, orctotal, mezsold, meztotal, gensold, gentotal, balsold, baltotal);
				printf("March total sales:\n%d tickets for $%d\n\n", monthsold, monthtotal);

				orcsold = arr[3][0][0];
				mezsold = arr[3][1][0];
				gensold = arr[3][2][0];
				balsold = arr[3][3][0];

				orctotal = orcsold * T1;
				meztotal = mezsold * T2;
				gentotal = gensold * T3;
				baltotal = balsold * T4;

				monthsold = orcsold + mezsold + gensold + balsold;
				monthtotal = orctotal + meztotal + gentotal + baltotal;

				allsold += monthsold;
				alltotal += monthtotal;

				printf("April sales by section:\nOrchestra: %d - $%d\nMezzanine: %d - $%d\nGeneral: %d - $%d\nBalcony: %d - $%d\n\n",
					orcsold, orctotal, mezsold, meztotal, gensold, gentotal, balsold, baltotal);
				printf("April total sales:\n%d tickets for $%d\n\n", monthsold, monthtotal);

				orcsold = arr[4][0][0];
				mezsold = arr[4][1][0];
				gensold = arr[4][2][0];
				balsold = arr[4][3][0];

				orctotal = orcsold * T1;
				meztotal = mezsold * T2;
				gentotal = gensold * T3;
				baltotal = balsold * T4;

				monthsold = orcsold + mezsold + gensold + balsold;
				monthtotal = orctotal + meztotal + gentotal + baltotal;

				allsold += monthsold;
				alltotal += monthtotal;

				printf("May sales by section:\nOrchestra: %d - $%d\nMezzanine: %d - $%d\nGeneral: %d - $%d\nBalcony: %d - $%d\n\n",
					orcsold, orctotal, mezsold, meztotal, gensold, gentotal, balsold, baltotal);
				printf("May total sales:\n%d tickets for $%d\n\n", monthsold, monthtotal);

				orcsold = arr[5][0][0];
				mezsold = arr[5][1][0];
				gensold = arr[5][2][0];
				balsold = arr[5][3][0];

				orctotal = orcsold * T1;
				meztotal = mezsold * T2;
				gentotal = gensold * T3;
				baltotal = balsold * T4;

				monthsold = orcsold + mezsold + gensold + balsold;
				monthtotal = orctotal + meztotal + gentotal + baltotal;

				allsold += monthsold;
				alltotal += monthtotal;

				printf("June sales by section:\nOrchestra: %d - $%d\nMezzanine: %d - $%d\nGeneral: %d - $%d\nBalcony: %d - $%d\n\n",
					orcsold, orctotal, mezsold, meztotal, gensold, gentotal, balsold, baltotal);
				printf("June total sales:\n%d tickets for $%d\n\n", monthsold, monthtotal);

				orcsold = arr[6][0][0];
				mezsold = arr[6][1][0];
				gensold = arr[6][2][0];
				balsold = arr[6][3][0];

				orctotal = orcsold * T1;
				meztotal = mezsold * T2;
				gentotal = gensold * T3;
				baltotal = balsold * T4;

				monthsold = orcsold + mezsold + gensold + balsold;
				monthtotal = orctotal + meztotal + gentotal + baltotal;

				allsold += monthsold;
				alltotal += monthtotal;

				printf("July sales by section:\nOrchestra: %d - $%d\nMezzanine: %d - $%d\nGeneral: %d - $%d\nBalcony: %d - $%d\n\n",
					orcsold, orctotal, mezsold, meztotal, gensold, gentotal, balsold, baltotal);
				printf("July total sales:\n%d tickets for $%d\n\n", monthsold, monthtotal);

				orcsold = arr[7][0][0];
				mezsold = arr[7][1][0];
				gensold = arr[7][2][0];
				balsold = arr[7][3][0];

				orctotal = orcsold * T1;
				meztotal = mezsold * T2;
				gentotal = gensold * T3;
				baltotal = balsold * T4;

				monthsold = orcsold + mezsold + gensold + balsold;
				monthtotal = orctotal + meztotal + gentotal + baltotal;

				allsold += monthsold;
				alltotal += monthtotal;

				printf("August sales by section:\nOrchestra: %d - $%d\nMezzanine: %d - $%d\nGeneral: %d - $%d\nBalcony: %d - $%d\n\n",
					orcsold, orctotal, mezsold, meztotal, gensold, gentotal, balsold, baltotal);
				printf("August total sales:\n%d tickets for $%d\n\n", monthsold, monthtotal);

				orcsold = arr[8][0][0];
				mezsold = arr[8][1][0];
				gensold = arr[8][2][0];
				balsold = arr[8][3][0];

				orctotal = orcsold * T1;
				meztotal = mezsold * T2;
				gentotal = gensold * T3;
				baltotal = balsold * T4;

				monthsold = orcsold + mezsold + gensold + balsold;
				monthtotal = orctotal + meztotal + gentotal + baltotal;

				allsold += monthsold;
				alltotal += monthtotal;

				printf("September sales by section:\nOrchestra: %d - $%d\nMezzanine: %d - $%d\nGeneral: %d - $%d\nBalcony: %d - $%d\n\n",
					orcsold, orctotal, mezsold, meztotal, gensold, gentotal, balsold, baltotal);
				printf("September total sales:\n%d tickets for $%d\n\n", monthsold, monthtotal);

				orcsold = arr[9][0][0];
				mezsold = arr[9][1][0];
				gensold = arr[9][2][0];
				balsold = arr[9][3][0];

				orctotal = orcsold * T1;
				meztotal = mezsold * T2;
				gentotal = gensold * T3;
				baltotal = balsold * T4;

				monthsold = orcsold + mezsold + gensold + balsold;
				monthtotal = orctotal + meztotal + gentotal + baltotal;

				allsold += monthsold;
				alltotal += monthtotal;

				printf("October sales by section:\nOrchestra: %d - $%d\nMezzanine: %d - $%d\nGeneral: %d - $%d\nBalcony: %d - $%d\n\n",
					orcsold, orctotal, mezsold, meztotal, gensold, gentotal, balsold, baltotal);
				printf("October total sales:\n%d tickets for $%d\n\n", monthsold, monthtotal);

				orcsold = arr[10][0][0];
				mezsold = arr[10][1][0];
				gensold = arr[10][2][0];
				balsold = arr[10][3][0];

				orctotal = orcsold * T1;
				meztotal = mezsold * T2;
				gentotal = gensold * T3;
				baltotal = balsold * T4;

				monthsold = orcsold + mezsold + gensold + balsold;
				monthtotal = orctotal + meztotal + gentotal + baltotal;

				allsold += monthsold;
				alltotal += monthtotal;

				printf("November sales by section:\nOrchestra: %d - $%d\nMezzanine: %d - $%d\nGeneral: %d - $%d\nBalcony: %d - $%d\n\n",
					orcsold, orctotal, mezsold, meztotal, gensold, gentotal, balsold, baltotal);
				printf("November total sales:\n%d tickets for $%d\n\n", monthsold, monthtotal);

				orcsold = arr[11][0][0];
				mezsold = arr[11][1][0];
				gensold = arr[11][2][0];
				balsold = arr[11][3][0];

				orctotal = orcsold * T1;
				meztotal = mezsold * T2;
				gentotal = gensold * T3;
				baltotal = balsold * T4;

				monthsold = orcsold + mezsold + gensold + balsold;
				monthtotal = orctotal + meztotal + gentotal + baltotal;

				allsold += monthsold;
				alltotal += monthtotal;

				printf("December sales by section:\nOrchestra: %d - $%d\nMezzanine: %d - $%d\nGeneral: %d - $%d\nBalcony: %d - $%d\n\n",
					orcsold, orctotal, mezsold, meztotal, gensold, gentotal, balsold, baltotal);
				printf("December total sales:\n%d tickets for $%d\n\n", monthsold, monthtotal);

				// print yearly totals for all tickets sold and all revenue
				printf("Total sales for the year: %d - $%d", allsold, alltotal);
				// break out of loop
				break;
				}

		getchar();
		getchar();

		return 0;
}