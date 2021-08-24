#ifndef GAME_DATA_INCLUDED
#define GAME_DATA_INCLUDED 1

enum Colors
{
	GREEN = 0xa,
	GREEN_WITH_BLUE_BACKGROUND = 0x9a,
	CYAN = 0xb,
	YELLOW = 0xe
};

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