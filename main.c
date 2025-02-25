#include <stdio.h>

int main()
{
	char userCommand[64];

	char exitCommand[64] = "exit";

	while (strcmp(userCommand, exitCommand) != 0)
	{
		printf("$ ");

		scanf("%s", userCommand);
		processCommand(userCommand);
	}

	/* What we want to make:
	 * LS command
	 * CD command
	 * PWD command
	 */

	return 0;
}

int processCommand(char userCommand[])
{
	printf("%s\n", userCommand);
	return 0;
}
