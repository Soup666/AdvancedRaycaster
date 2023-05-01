
#ifndef Map_h
#define Map_h

#include "window.h"

class Map {
public:
	void drawBg();
	Map(Window* w) { window = w; }

private:
	Window* window;
};

#endif
