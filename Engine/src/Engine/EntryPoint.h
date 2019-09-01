#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS

extern Engine::Application* Engine::create_application();

int main(int argc, char** argv)
{
	Engine::Log::init();
	ENGINE_TRACE("Initialized Logger");

	auto app = Engine::create_application();
	ENGINE_TRACE("Created application");

	app->run();
	ENGINE_TRACE("Done running app");

	delete app;
	ENGINE_TRACE("Cleanup complete");
}

#endif
