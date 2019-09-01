#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS

#include "Log.h"
#include "Application.h"

extern Engine::Application* Engine::create_application();

int main(int argc, char** argv)
{
	::Engine::Log::init();
	ENGINE_TRACE("Initialized Logger");
	ENGINE_INFO("This is info");
	ENGINE_WARN("This is a warn");
	ENGINE_ERROR("This is an error");

	auto app = Engine::create_application();
	ENGINE_TRACE("Created application");

	app->run();
	ENGINE_TRACE("Done running app");

	delete app;
	ENGINE_TRACE("Cleanup complete");
}

#endif
