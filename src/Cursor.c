#ifndef CURSOR_INCLUDED
#define CURSOR_INCLUDED 1

#include <windows.h>

void hideCursor(BOOLEAN);
void moveCursorTo(short, short);
void hideCursor(BOOLEAN command)
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info = {100, !(command)};
	SetConsoleCursorInfo(output, &info);
}

void moveCursorTo(short x, short y)
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = {x, y};
	SetConsoleCursorPosition(output, position);
}

#endif // CURSOR_C_INCLUDED