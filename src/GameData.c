#ifndef GAME_DATA_INCLUDED
#define GAME_DATA_INCLUDED 1

#include <windows.h>
char grid[3][3] = {

	{' ', ' ', ' '},

	{' ', ' ', ' '},

	{' ', ' ', ' '},
};

int numberOfInputs = 0;
BOOLEAN player_X_turn = TRUE;
BOOLEAN player_O_turn = FALSE;

#endif // GAME_DATA_INCLUDED