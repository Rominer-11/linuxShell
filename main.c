#include <stdio.h>

#define BUFFERSIZE 64
#define WIN_BASE 20
#define WIN_HEIGHT 10

char window[WIN_HEIGHT][WIN_BASE];

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

void setupWindow()
{
	int row;
	for (row = 0; row < WIN_HEIGHT; ++row)
	{
		int col;
		for (col = 0; col < WIN_BASE; ++col)
		{
			if (row == 0 || row == 9)
			{
				window[row][col] = '-';
			}
		}
		window[1] = ['S', 'H', 'E', 'L', 'L']; 
	}

}

void displayWindow()
{
	int row;
	for (row = 0; row < 10; ++row)
	{
		int col;
		for (col = 0; col < 20; ++col)
		{
			printf("%c", window[row][col]);
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
	
	setupWindow();

	while (isExitCommand(userCommand) != 1)
	{
		system("clear");
		displayWindow();
		system(userCommand);
		printf("$H> ");

		fgets(userCommand, BUFFERSIZE, stdin);
	}

	return 0;
}

