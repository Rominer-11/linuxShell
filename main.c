#include <stdio.h>
#define BUFFERSIZE 64

/*
 * Contains main command loop
 * Checks for exit command
 * Sends command to be processed
 */
int main()
{
	char userCommand[BUFFERSIZE];

	char exitCommand[BUFFERSIZE] = "exit\n";

	while (isExitCommand(userCommand) != 1)
	{
		system(userCommand);
		
		printf("%s", getWindow());
		printf("$H> ");

		fgets(userCommand, BUFFERSIZE, stdin);
	}

	return 0;
}

/* Exactly what it sounds like */
int isExitCommand(char userCommand[])
{
	char exitCommand[BUFFERSIZE] = "exit\n";

	int n = 0;
	if (strcmp(userCommand, exitCommand) == 0)
	{
		n = 1;
	}
	return n;
}

char getWindow()
{
	char window[10][10];
	return window;
}
