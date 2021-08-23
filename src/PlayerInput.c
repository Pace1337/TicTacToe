
#ifndef PLAYER_INPUT_INCLUDED
#define PLAYER_INPUT_INCLUDED 1

#include <conio.h>
#include <windows.h>
#include "PlayerNames.c"
#include "Draw_X_And_O.c"
#include "GameData.c"
#include "CheckIfPlayerWins.c"
#include "Game.c"

void player_X_Input();
void player_O_Input();
BOOLEAN InvalidInput(char);

int main()
{
	consoleSetUp();
	player_X_Input();
	player_O_Input();
	getch();
}

void player_X_Input()
{
	highlight_player_X_name();
	player_X_turn = FALSE;
	player_O_turn = TRUE;
	char input = getch();
	numberOfInputs++;
	if (InvalidInput(input))
	{
		char re_enter;
		while (TRUE)
		{
			re_enter = getch();
			if (InvalidInput(re_enter))
				continue;

			else
			{
				input = re_enter;
				break;
			}
		}
	}

	switch (input)
	{
	case '1':
		grid[2][0] = 'X';
		draw_X_at_grid_location('1');
		check_If_X_Wins();
		break;

	case '2':
		grid[2][1] = 'X';
		draw_X_at_grid_location('2');
		check_If_X_Wins();
		break;

	case '3':
		grid[2][2] = 'X';
		draw_X_at_grid_location('3');
		check_If_X_Wins();
		break;

	case '4':
		grid[1][0] = 'X';
		draw_X_at_grid_location('4');
		check_If_X_Wins();
		break;

	case '5':
		grid[1][1] = 'X';
		draw_X_at_grid_location('5');
		check_If_X_Wins();
		break;

	case '6':
		grid[1][2] = 'X';
		draw_X_at_grid_location('6');
		check_If_X_Wins();
		break;

	case '7':
		grid[0][0] = 'X';
		draw_X_at_grid_location('7');
		check_If_X_Wins();
		break;

	case '8':
		grid[0][1] = 'X';
		draw_X_at_grid_location('8');
		check_If_X_Wins();
		break;

	case '9':
		grid[0][2] = 'X';
		draw_X_at_grid_location('9');
		check_If_X_Wins();
		break;

	case 'X':
		exit(EXIT_SUCCESS);

	case 'R':
		player_X_turn = TRUE;
		player_O_turn = FALSE;
		reset();
	}

	remove_player_X_name_highlight();
}

void player_O_Input()
{
	highlight_player_O_name();
	player_X_turn = TRUE;
	player_O_turn = FALSE;
	char input = getch();
	numberOfInputs++;
	if (InvalidInput(input))
	{
		char re_enter;
		while (TRUE)
		{
			re_enter = getch();
			if (InvalidInput(re_enter))
				continue;

			else
			{
				input = re_enter;
				break;
			}
		}
	}

	switch (input)
	{
	case '1':
		grid[2][0] = 'O';
		draw_O_at_grid_location('1');
		check_If_O_Wins();
		break;

	case '2':
		grid[2][1] = 'O';
		draw_O_at_grid_location('2');
		check_If_O_Wins();
		break;

	case '3':
		grid[2][2] = 'O';
		draw_O_at_grid_location('3');
		check_If_O_Wins();
		break;

	case '4':
		grid[1][0] = 'O';
		draw_O_at_grid_location('4');
		check_If_O_Wins();
		break;

	case '5':
		grid[1][1] = 'O';
		draw_O_at_grid_location('5');
		check_If_O_Wins();
		break;

	case '6':
		grid[1][2] = 'O';
		draw_O_at_grid_location('6');
		check_If_O_Wins();
		break;

	case '7':
		grid[0][0] = 'O';
		draw_O_at_grid_location('7');
		check_If_O_Wins();
		break;

	case '8':
		grid[0][1] = 'O';
		draw_O_at_grid_location('8');
		check_If_O_Wins();
		break;

	case '9':
		grid[0][2] = 'O';
		draw_O_at_grid_location('9');
		check_If_O_Wins();
		break;

	case 'X':
		exit(EXIT_SUCCESS);

	case 'R':
		player_X_turn = TRUE;
		player_O_turn = FALSE;
		reset();
	}

	remove_player_O_name_highlight();
}

BOOLEAN InvalidInput(char input)
{
	if (input == '1' && (grid[2][0] == 'X' || grid[2][0] == 'O'))
		return TRUE;
		
	else if (input == '2' && (grid[2][1] == 'X' || grid[2][1] == 'O'))
		return TRUE;
		
	else if (input == '3' && (grid[2][2] == 'X' || grid[2][2] == 'O'))
		return TRUE;
		
	else if (input == '4' && (grid[1][0] == 'X' || grid[1][0] == 'O'))
		return TRUE;
		
	else if (input == '5' && (grid[1][1] == 'X' || grid[1][1] == 'O'))
		return TRUE;
		
	else if (input == '6' && (grid[1][2] == 'X' || grid[1][2] == 'O'))
		return TRUE;
		
	else if (input == '7' && (grid[0][0] == 'X' || grid[0][0] == 'O'))
		return TRUE;
		
	else if (input == '8' && (grid[0][1] == 'X' || grid[0][1] == 'O'))
		return TRUE;
		
	else if (input == '9' && (grid[0][2] == 'X' || grid[0][2] == 'O'))
		return TRUE;
		
	else if (input == 'R' || input == 'X')
		return FALSE;

	else if (!(input >= '1' && input <= '9')) 
		return TRUE;

	else return FALSE;
}

#endif // PLAYER_INPUT_INCLUDED