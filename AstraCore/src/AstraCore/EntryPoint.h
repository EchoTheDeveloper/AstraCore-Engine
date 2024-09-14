#pragma once
#include "Application.h"

#ifdef ASTRA_PLATFORM_WINDOWS

extern AstraCore::Application* AstraCore::CreateApplication();

int main(int argc, char** argv)
{
	printf("AstraCore Engine");
	auto app = AstraCore::CreateApplication();
	app->Run();
	delete app;
}

#endif
