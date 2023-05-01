#include <iostream>
#include "../include/window.h"
#include "../include/map.h"
#include "../include/manager.h"

using namespace std;

int main(int argc, char** argv) {

	cout << "Hello World!\n";

	Window* window = new Window();

	Manager manager(window);
	manager.init();
	manager.loop();

	return 0;

}

