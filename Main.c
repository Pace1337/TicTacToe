#ifndef MAIN_INCLUDED
#define MAIN_INCLUDED 1

#include "src/CheckIfPlayerWins.c"
#include "src/Cursor.c"
#include "src/Draw_X_And_O.c"
#include "src/Font.c"
#include "src/Game.c"
#include "src/Grid.c"
#include "src/PlayerInput.c"
#include "src/PlayerNames.c"

int main()
{
	game();

	return 0;
}

#endif // MAIN_INCLUDED