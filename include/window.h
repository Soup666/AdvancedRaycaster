
#ifndef Window_h
#define Window_h

#include <SDL2/SDL.h>
#include <iostream>

class Window {
public:
	
	int main();
	int init();
	void cleanup();
	
	void setColor(int r, int g, int b);
	void drawRect(int x, int y, int width, int height);
	
	void update();
	void pause(int s) { SDL_Delay(s); }

private:
	
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	
};

#endif
