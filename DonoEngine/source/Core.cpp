#include "Core.h"

Core::Core() {
	initWindow();
	initVulkan();
}

void Core::run() {
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}
}

void Core::initWindow() {
	glfwInit();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
	
	window = glfwCreateWindow(width, height, "DonoEngine", nullptr, nullptr);
	glfwSetWindowUserPointer(window, this);
}

void Core::initVulkan() {
}

Core::~Core() {

	//Cleanup GLFW
	glfwDestroyWindow(window);
	glfwTerminate();
}
