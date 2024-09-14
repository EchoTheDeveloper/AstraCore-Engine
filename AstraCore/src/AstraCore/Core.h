#pragma once

#ifdef ASTRA_PLATFORM_WINDOWS
	#ifdef ASTRACORE_BUILD_DLL
		#define ASTRACORE_API __declspec(dllexport)
	#else
		#define ASTRACORE_API __declspec(dllimport)
	#endif
#else
	#error AstraCore Only Supports Windows (For Now)!
#endif
