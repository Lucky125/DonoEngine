#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class Core {
public:
	Core();

	void run();

	//Cleanup
	~Core();

private:
	//Restrict object manipulation
	Core(const Core& Other) = delete;
	Core& operator=(const Core& other) = delete;

	//Init
	void initWindow();
	void initVulkan();

private:
	//Window
	uint32_t width = 800;
	uint32_t height = 600;
	GLFWwindow* window;
};

