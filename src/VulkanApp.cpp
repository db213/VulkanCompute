#include "VulkanApp.hpp"

#include <stdexcept>
#include <vulkan/vulkan.h>


namespace { 
  void createInstance() { 
    VkApplicationInfo appInfo{}; 
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO; 
    appInfo.pApplicationName = "Hello Triangle"; 
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0); 
    appInfo.pEngineName = "No Engine"; 
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0); 
    appInfo.apiVersion = VK_API_VERSION_1_0; 
  } 
} 


void VulkanApp::run() {
  initWindow();
  initVulkan();
  mainLoop();
}

void VulkanApp::initWindow() {
  VulkanApp::window = SDL_CreateWindow("SDL2 Window",
		            SDL_WINDOWPOS_CENTERED,
		            SDL_WINDOWPOS_CENTERED,
		            680, 480, 0
		           );
  if (!VulkanApp::window) {
    throw std::runtime_error("Failed to create window");
  }
  SDL_Surface *windowSurface = SDL_GetWindowSurface(VulkanApp::window);
  if (!windowSurface) {
    throw std::runtime_error("Failed to get surface from window");
  }
}

void VulkanApp::initVulkan() {
  createInstance();
}

void VulkanApp::mainLoop() {
  bool keepWindowOpen = true;

  while (keepWindowOpen) {
    SDL_Event e;
    while (SDL_PollEvent(&e) > 0) {
    switch (e.type) {
      case SDL_QUIT:
        keepWindowOpen = false;
        break;
      }
      SDL_UpdateWindowSurface(VulkanApp::window);
    }
  }
}
