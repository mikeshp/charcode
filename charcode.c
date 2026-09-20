/* Developed by Mikhail Shprygov */
/* Profile: github.com/mshprygov */
/* Contact: mike.shp@hotmail.com */

#include <stdio.h>

int main(int argc, char** argv)
{
	unsigned char user_char;

	if (argc > 1)
	{
		user_char = argv[1][0];
	}
	else
	{
		printf("Enter a character: ");

		char user_input[32];

		if (fgets(user_input,sizeof(user_input),stdin) == NULL)
		{
			printf("Error reading input\n");
			return 1;
		}
		else
		{
			user_char = user_input[0];
		}
	}

	if (user_char >= 128)
	{
		printf("Multi-byte UTF-8 character (not ASCII)\n");
	}
	else if (user_char > 32 && user_char < 127)
	{
		printf("The ASCII code for \"%c\" is %d\n",user_char,user_char);
	}
	else
	{
		printf("The ASCII code for %s is %d\n",
		(user_char == 32) ? "<Space>" : "the input", user_char);
	}

	return 0;
}
