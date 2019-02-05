#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HORSEY_API __declspec(dllexport)
	#else
		#define HORSEY_API __declspec(dllimport)
	#endif
#else
	#error Horsey only support Windows!
#endif