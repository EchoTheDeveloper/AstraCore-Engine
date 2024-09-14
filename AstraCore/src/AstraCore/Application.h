#pragma once
#include "Core.h"

namespace AstraCore {
	class ASTRACORE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	// To be defined in CLIENT.
	Application* CreateApplication();
}

