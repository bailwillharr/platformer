#include "window.hpp"

#include <cstdio>
#include <cstdlib>

int main(int, char*[])
{
	printf("Hello world!\n");

	engine::Window win("Platformer", false, true);

	while (win.isRunning()) {

		if (win.getKeyPress(engine::inputs::Key::K_ESCAPE)) {
			win.setCloseFlag();
		}

		win.getInputAndEvents();
	}

	return EXIT_SUCCESS;
}
