#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	//Hazel::Log::GetCoreLogger()->warn("Initialized Log!");
	HZ_CORE_WARN("Initialized Log!");
	//Hazel::Log::GetClientLogger()->info("Hello!");
	int a = 5;
	HZ_INFO("Hello! Test={0}", a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif