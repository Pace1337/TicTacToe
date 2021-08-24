#ifndef GRID_INCLUDED
#define GRID_INCLUDED 1

#include <stdio.h>
#include <windows.h>
#include "Cursor.c"
#include "GameData.c"

void drawGrid();
void drawGrid()
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(output, CYAN);
	char horizontal_line = 219;
	char vertical_line = 219;
	int i;
	for (i = 5; i <= 33; i++) // Vertical Lines
	{
		moveCursorTo(32, i); // First one
		putchar(vertical_line);
		moveCursorTo(44, i); // Second one
		putchar(vertical_line);
	}

	for (i = 21; i <= 55; i++) // Horizontal Lines
	{
		moveCursorTo(i, 14); // First one
		putchar(horizontal_line);
		moveCursorTo(i, 24); // Second one
		putchar(horizontal_line);
	}
}

#endif // GRID_INCLUDED