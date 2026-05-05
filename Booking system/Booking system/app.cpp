#include "app.h"

App::App() {
	
}

App::~App() {
	std::cout << "App stopped" << std::endl;

}

void App::start() {
	std::cout << "App started" << std::endl;
	std::cout << "Press Escape to exit" << std::endl;
	while (true) {
		if (GetAsyncKeyState(27) & 0x8000)
			break;
	}
}
