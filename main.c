#include <stdio.h>

int main()
{
	char userCommand[64];
	char userArgs[256];

	char exitCommand[64] = "exit";

	while (strcmp(userCommand, exitCommand) != 0)
	{
		printf("$ ");

		scanf("%s %s", userCommand, userArgs);
		printf("Command recieved: %s\n", userCommand);
		printf("Arguments recieved: %s\n", userArgs);	
	}

	return 0;
}
