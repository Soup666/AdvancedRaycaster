#include "../include/window.h"

int Window::main() {
	if (init() == 0) {
		SDL_Delay(2000);
	}

	cleanup();
	return 0;
};

void Window::update() {
	SDL_RenderPresent(renderer);
}

void Window::setColor(int r, int g, int b) {
	SDL_SetRenderDrawColor(renderer, r,g,b,255);
}

void Window::drawRect(int x, int y, int width, int height) {
	SDL_Rect rect;
	rect.x = x;
	rect.y = y;
	rect.w = width;
	rect.h = height;
	SDL_RenderFillRect(renderer, &rect);
}

int Window::init() {
	
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << "SDL Could not Initialize!\n";
		return 1;
	}
	
	window = SDL_CreateWindow("Jeu de la vie", SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640,
        480,
        SDL_WINDOW_SHOWN);

	if (window == NULL) {
		std::cout << "Window broken\n";
		return 1;
	}
	
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	
	SDL_SetRenderDrawColor( renderer, 255, 0, 0, 255 );

    // Clear winow
    SDL_RenderClear( renderer );

	//Update the surface
	SDL_RenderPresent(renderer);

	return 0;

};

void Window::cleanup() {
	
    //Destroy window
    SDL_DestroyWindow(window);

    //Quit SDL subsystems
    SDL_Quit();
}
