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
	char filledBlock = 219;
	int i;
	for (i = 5; i <= 33; i++) // Vertical Lines
	{
		moveCursorTo(32, i); // First vertical line
		putchar(filledBlock);
		moveCursorTo(44, i); // Second vertical line
		putchar(filledBlock);
	}

	for (i = 21; i <= 55; i++) // Horizontal Lines
	{
		moveCursorTo(i, 14); // First horizontal line
		putchar(filledBlock);
		moveCursorTo(i, 24); // Second horizontal line
		putchar(filledBlock);
	}
}

#endif // GRID_INCLUDED