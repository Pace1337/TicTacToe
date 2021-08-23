#include "Game.c"

#ifndef CHECK_IF_PLAYER_WINS_INCLUDED
#define CHECK_IF_PLAYER_WINS_INCLUDED 1

void check_If_X_Wins();
void check_If_O_Wins();

void reset(); /* I have no Idea but, without this line, the 
code just won't compile. I'll fix this issue asap
*/
void check_If_X_Wins()
{
	if (grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X') // Checking Top Side for player X
	{
		player_X_turn = TRUE;
		player_O_turn = FALSE;
		moveCursorTo(35, 36);
		printf("X wins");
		getch();
		reset();
	}

	else if (grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X') // Checking Right Side for player X
	{
		player_X_turn = TRUE;
		player_O_turn = FALSE;
		moveCursorTo(35, 36);
		printf("X wins");
		getch();
		reset();
	}

	else if (grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X') // Checking Bottom Side for player X
	{
		player_X_turn = TRUE;
		player_O_turn = FALSE;
		moveCursorTo(35, 36);
		printf("X wins");
		getch();
		reset();
	}

	else if (grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X') // Checking Left Side for player X
	{
		player_X_turn = TRUE;
		player_O_turn = FALSE;
		moveCursorTo(35, 36);
		printf("X wins");
		getch();
		reset();
	}

	else if (grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X') // Checking Vertical Side for player X
	{
		player_X_turn = TRUE;
		player_O_turn = FALSE;
		moveCursorTo(35, 36);
		printf("X wins");
		getch();
		reset();
	}

	else if (grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X') // Checking horizontal Side for player X
	{
		player_X_turn = TRUE;
		player_O_turn = FALSE;
		moveCursorTo(35, 36);
		printf("X wins");
		getch();
		reset();
	}

	else if (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X') // Diagonal for player X
	{
		player_X_turn = TRUE;
		player_O_turn = FALSE;
		moveCursorTo(35, 36);
		printf("X wins");
		getch();
		reset();
	}

	else if (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X') // Checking Anti-Diagonal for player X
	{
		player_X_turn = TRUE;
		player_O_turn = FALSE;
		moveCursorTo(35, 36);
		printf("X wins");
		getch();
		reset();
	}

	else if (numberOfInputs == 9)
	{
		moveCursorTo(35, 36);
		printf("Draw");
		getch();
		reset();
	}
}

void check_If_O_Wins()
{
	if (grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O') // Checking Top Side for player
	{
		player_X_turn = FALSE;
		player_O_turn = TRUE;
		moveCursorTo(35, 36);
		printf("O wins!");
		getch();
		reset();
	}

	else if (grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O') // Checking Right Side for player
	{
		player_X_turn = FALSE;
		player_O_turn = TRUE;
		moveCursorTo(35, 36);
		printf("O wins!");
		getch();
		reset();
	}

	else if (grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O') // Checking Bottom Side for player
	{
		player_X_turn = FALSE;
		player_O_turn = TRUE;
		moveCursorTo(35, 36);
		printf("O wins!");
		getch();
		reset();
	}

	else if (grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O') // Checking Left Side for player
	{
		player_X_turn = FALSE;
		player_O_turn = TRUE;
		moveCursorTo(35, 36);
		printf("O wins!");
		getch();
		reset();
	}

	else if (grid[0][1] == 'O' && grid[1][1] == 'O' && grid[2][1] == 'O') // Checking Vertical Side for player
	{
		player_X_turn = FALSE;
		player_O_turn = TRUE;
		moveCursorTo(35, 36);
		printf("O wins!");
		getch();
		reset();
	}

	else if (grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O') // Checking horizontal Side for player
	{
		player_X_turn = FALSE;
		player_O_turn = TRUE;
		moveCursorTo(35, 36);
		printf("O wins!");
		getch();
		reset();
	}

	else if (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O') // Diagonal for player
	{
		player_X_turn = FALSE;
		player_O_turn = TRUE;
		moveCursorTo(35, 36);
		printf("O wins!");
		getch();
		reset();
	}

	else if (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O') // Checking Anti-Diagonal for player
	{
		player_X_turn = FALSE;
		player_O_turn = TRUE;
		moveCursorTo(35, 36);
		printf("O wins!");
		getch();
		reset();
	}

	else if (numberOfInputs == 9)
	{
		moveCursorTo(35, 36);
		printf("Draw");
		getch();
		reset();
	}
}

#endif // CHECK_IF_PLAYER_WINS_INCLUDED