#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Horsey {
	class HORSEY_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;}
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger;}
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}


// Core log macros
#define HZ_CORE_TRACE(...) ::Horsey::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define HZ_CORE_INFO(...)  ::Horsey::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_WARN(...)  ::Horsey::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_ERROR(...) ::Horsey::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_FATAL(...) ::Horsey::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define HZ_TRACE(...) ::Horsey::Log::GetClientLogger()->trace(__VA_ARGS__)
#define HZ_INFO(...)  ::Horsey::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_WARN(...)  ::Horsey::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_ERROR(...) ::Horsey::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_FATAL(...) ::Horsey::Log::GetClientLogger()->fatal(__VA_ARGS__)