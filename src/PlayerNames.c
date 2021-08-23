
#ifndef PLAYER_NAMES_INCLUDED
#define PLAYER_NAMES_INCLUDED 1

#include <stdio.h>
#include <windows.h>
#include "Cursor.c"

void displayNames();
void highlight_player_X_name();
void highlight_player_O_name();
void remove_player_X_name_highlight();
void remove_player_O_name_highlight();

void displayNames()
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(output, 0xa);
	moveCursorTo(0, 0);
	printf("%s", "Player X");
	moveCursorTo(69, 0);
	printf("%s", "Player O");
}

void highlight_player_X_name()
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	moveCursorTo(0, 0);
	SetConsoleTextAttribute(output, 0x9a);
	printf("%s", "Player X");
}

void highlight_player_O_name()
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	moveCursorTo(69, 0);
	SetConsoleTextAttribute(output, 0x9a);
	printf("%s", "Player O");
}

void remove_player_X_name_highlight()
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	moveCursorTo(0, 0);
	SetConsoleTextAttribute(output, 0xa);
	printf("%s", "Player X");
}

void remove_player_O_name_highlight()
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	moveCursorTo(69, 0);
	SetConsoleTextAttribute(output, 0xa);
	printf("%s", "Player O");
}

#endif // PLAYER_NAMES_INCLUDED