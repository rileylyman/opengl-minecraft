#include <stdio.h>
#include "Engine.h"

class Game : public Engine::Application {
public:
	Game() {
	}
	~Game() {
	}

	void run() override
	{
		CLIENT_TRACE("Client trace");
		CLIENT_INFO("Client info");
		CLIENT_WARN("Client warning");
		CLIENT_ERROR("Client error");
		while (true);
	}
};

Engine::Application* Engine::create_application()
{
	return new Game();
}
