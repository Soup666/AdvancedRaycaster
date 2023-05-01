#ifndef Manager_h
#define Manager_h

#include "window.h"
#include "map.h"

class Manager {
public:
	void init();
	void loop();

	Manager(Window* w) { window = w; }

private:
	Window* window;
	Map* map = NULL;
};

#endif
