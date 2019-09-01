#include <stdio.h>
#include "Engine.h"


class MinecraftApplication : public Engine::Application {
public:
	MinecraftApplication() {
	}
	~MinecraftApplication() {
	}
};

Engine::Application* Engine::create_application()
{
	return new MinecraftApplication();
}
