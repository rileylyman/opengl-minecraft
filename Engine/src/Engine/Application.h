#pragma once

#include "Core.h"

namespace Engine {

	class ENGINE_API Application
	{
	public:
		Application() {
		}
		virtual ~Application() {
		}

		virtual void run() {}
	};

	Application* create_application();

}

