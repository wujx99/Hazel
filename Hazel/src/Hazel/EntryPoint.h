#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Init logging");
	int a = 5;
	HZ_INFO("the value a = {}", a);

	printf("Hazel Engine!");
	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
