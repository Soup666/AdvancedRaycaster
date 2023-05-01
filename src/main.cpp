#include <iostream>
#include "../include/window.h"
#include "../include/map.h"

using namespace std;

int main(int argc, char** argv) {

	cout << "Hello World!\n";

	Window window;
	window.init();

	Map map(&window);

	map.drawBg();

	window.update();
	window.pause(3000);
	window.cleanup();

	return 0;
}

