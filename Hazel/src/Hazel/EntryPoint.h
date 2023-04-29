#pragma once

#include"Application.h"

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();

	HZ_CORE_WARN("Logger Intitalized");
	HZ_CLIENT_WARN("Logger Intitalized");

	auto app = Hazel::CreateApplication();
	app ->Run();
	delete app;
}

#endif