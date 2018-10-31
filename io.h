#ifndef _IO_
#define _IO_

//--- includes
#ifndef LINUX
#include "SDL/includes/SDL.h"
#include "SDL/DSL_GfxPrimitives/SDL_gfxPrimitives.h"
#else
#include "SDL/SDL.h"
#include "SDL/DSL_GfxPrimitives/SDL_gfxPrimitives.h"
#endif

//--- enums
enum color {BLACK, RED, BLUE, GREEN, YELLOW, MAGENTA, CYAN, WHITE, COLOR_MAX};

//----------------------------------------------------------------------------
//                                    IO
//----------------------------------------------------------------------------

class IO {
public:
	IO ();
	void drawRectangle(int, int, int, int, enum color);
	void clearScreen();
	int getScreenHeight();
	int initGraph();
	int pollkey();
	int getKey();
	int isKeyDown();
	void updateScreen();
};

#endif