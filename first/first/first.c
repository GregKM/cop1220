#include <stdio.h>

int main(void)						/* a simple program */
{

	int num;						/* define a variable called num */

	num = 1;						/* assign a value to num */

	printf("I am a simple ");		/* use the printf() function */
	printf("computer.\n");
	printf("My favorite number is %d because it is first. \n", num);
	
	getchar();						/* make program wait for key press */

	return 0;
}