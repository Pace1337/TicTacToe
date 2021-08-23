#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED 1

#include "CheckIfPlayerWins.c"
#include "Cursor.c"
#include "Draw_X_And_O.c"
#include "Font.c"
#include "Game.c"
#include "Grid.c"
#include "PlayerInput.c"
#include "PlayerNames.c"

int main()
{
	game();

	return 0;
}

#endif // MAIN_INCLUDED