#ifndef GAME_INCLUDED
#define GAME_INCLUDED 1

#include "PlayerNames.c"
#include "PlayerInput.c"
#include "Grid.c"
#include "Font.c"
#include "Cursor.c"

void game();
void reset();
void consoleSetUp();

void game()
{
	consoleSetUp();
	while (TRUE)
	{
		if (player_X_turn)
			player_X_Input();
		else
			player_O_Input();
	}
}

void reset()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			grid[i][j] = ' ';
		}
	}
	numberOfInputs = 0;
	drawGrid();
	displayNames();
	game();
}

void consoleSetUp()
{
	system("title Tic Tac Toe");
	system("mode con: cols=77 lines=40");
	hideCursor(TRUE);
	setFont();
	drawGrid();
	displayNames();
}

#endif // GAME_INCLUDED