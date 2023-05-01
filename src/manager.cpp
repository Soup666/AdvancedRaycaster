#include "../include/manager.h"

void Manager::init() {

	window->init();

	map = new Map(window);
}

void Manager::loop() {
	while (!window->getShouldExit()) {
		window->handleEvents();
		
		map->drawBg();

		window->update();
		window->pause(1000);
	}

	window->cleanup();
}
