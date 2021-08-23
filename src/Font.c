
#ifndef FONT_INCLUDED
#define FONT_INCLUDED 1

#include <windows.h>

void setFont();
void setFont()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 15; // Width of each character in the font
	cfi.dwFontSize.Y = 24; // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy(cfi.FaceName, L"Lucida Console"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}

#endif // FONT_INCLUDED