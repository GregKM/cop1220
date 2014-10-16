#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t;
	int z = 0;
	int g = 0;
	int s = 0;
	int i = 0;

	while (i < 50) {
		scanf("&d", &t);
		s = s + t;
		if (t >= 0)
			g = g + 1;
		else
			z = z + 1;
		i = i + 1;
	}

	getchar();
	getchar();

	return 0;
}