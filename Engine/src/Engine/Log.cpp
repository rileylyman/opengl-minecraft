#include "Log.h"

namespace Engine {

	std::shared_ptr<spdlog::logger> _engine_logger;
	std::shared_ptr<spdlog::logger> _client_logger;

	void Log::init() 
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");

		_engine_logger = spdlog::stdout_color_mt("ENGINE");
		_engine_logger->set_level(spdlog::level::trace);

		_client_logger = spdlog::stdout_color_mt("APP");
		_client_logger->set_level(spdlog::level::trace);
	}

}
