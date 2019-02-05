#pragma once


#ifdef HZ_PLATFORM_WINDOWS

extern Horsey::Application* Horsey::CreateApplication();

int main(int argc, char** argv) {

	Horsey::Log::Init();
	HZ_CORE_WARN("Initialized log");
	int a = 5;
	HZ_INFO("Initialized log{0}",a);
	auto app = Horsey::CreateApplication();
	app->Run();
	delete app;

}

#endif