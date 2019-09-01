#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Engine {

	class ENGINE_API Log
	{
	public:
		static void init();

		static inline std::shared_ptr<spdlog::logger>& get_client_logger() {
			return _client_logger;
		}
		static inline std::shared_ptr<spdlog::logger>& get_engine_logger() {
			return _engine_logger;
		}

	private:
		static std::shared_ptr<spdlog::logger> _engine_logger;
		static std::shared_ptr<spdlog::logger> _client_logger;
	};

}

#define ENGINE_ERROR(...) ::Engine::Log::get_engine_logger()->error(__VA_ARGS__)
#define ENGINE_WARN(...)  ::Engine::Log::get_engine_logger()->warn (__VA_ARGS__)
#define ENGINE_INFO(...)  ::Engine::Log::get_engine_logger()->info (__VA_ARGS__)
#define ENGINE_TRACE(...) ::Engine::Log::get_engine_logger()->trace(__VA_ARGS__)

#define CLIENT_ERROR(...) ::Engine::Log::get_client_logger()->error(__VA_ARGS__)
#define CLIENT_WARN(...)  ::Engine::Log::get_client_logger()->warn (__VA_ARGS__)
#define CLIENT_INFO(...)  ::Engine::Log::get_client_logger()->info (__VA_ARGS__)
#define CLIENT_TRACE(...) ::Engine::Log::get_client_logger()->trace(__VA_ARGS__)
