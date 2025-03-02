#include <stdio.h>
#define BUFFERSIZE 64

char window[10][20];

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

void displayWindow()
{
	int row;
	for (row = 0; row < 10; ++row)
	{
		int col;
		for (col = 0; col < 20; ++col)
		{
			printf("%d", window[row][col]);
		}	
		printf("\n");
	}
}

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
		displayWindow();	
		printf("$H> ");

		fgets(userCommand, BUFFERSIZE, stdin);
	}

	return 0;
}

