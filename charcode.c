/* Developed by Mikhail Shprygov */
/* Profile: github.com/mshprygov */
/* Contact: mike.shp@hotmail.com */

#include <stdio.h>

int main(int argc, char** argv)
{
	char chr;
	int clear;

	if (argc > 1)
	{
		chr = argv[1][0];
	}
	else
	{
		printf("Enter a character: ");
		scanf(" %c", &chr);
		while ((clear = getchar()) != '\n' && clear != EOF);
	}

	if (chr > 255)
	{
		printf("The character is out of range!\n");
	}
	else
	{
		printf("The ASCII code for \'%c\' is %d\n", chr, chr);
	}

	return 0;
}
