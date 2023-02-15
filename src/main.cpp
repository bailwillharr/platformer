#include "window.hpp"
#include "gfx_device.hpp"

#include <cstdio>
#include <cstdlib>

int main(int, char*[])
{
	printf("Hello world!\n");

	engine::Window win("Platformer", false, true);
	engine::GFXDevice gfx("Platformer", "v0.0.1", win.getHandle());

	while (win.isRunning()) {

		if (win.getKeyPress(engine::inputs::Key::K_ESCAPE)) {
			win.setCloseFlag();
		}

		win.getInputAndEvents();

		gfx.renderFrame();
	}

	gfx.waitIdle();

	return EXIT_SUCCESS;
}
