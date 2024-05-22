#include "VulkanApp.hpp"

#include <vector>
#include <SDL2/SDL_vulkan.h>
#include <stdexcept>
#include <vulkan/vulkan.h>


namespace {
  void createAppInfo(VkApplicationInfo * appInfo) {
    appInfo->sType = VK_STRUCTURE_TYPE_APPLICATION_INFO; 
    appInfo->pApplicationName = "Hello Triangle"; 
    appInfo->applicationVersion = VK_MAKE_VERSION(1, 0, 0); 
    appInfo->pEngineName = "No Engine"; 
    appInfo->engineVersion = VK_MAKE_VERSION(1, 0, 0); 
    appInfo->apiVersion = VK_API_VERSION_1_0; 
  }  

  void createInstanceInfo(VkInstanceCreateInfo * createInfo,
                          VkApplicationInfo * appInfo,
                          std::vector<const char *> * requiredExtensions) {
    createInfo->sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo->pApplicationInfo = appInfo;


    createInfo->enabledExtensionCount = (uint32_t) requiredExtensions->size();
    createInfo->ppEnabledExtensionNames = requiredExtensions->data();
    createInfo->flags |= VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR; 
  }

  void createRequiredExtensions(unsigned int extensionCount,
                                const char ** extensionNames,
                                std::vector<const char *> * requiredExtensions) {
    for (uint32_t i = 0; i < extensionCount; i++) {
      requiredExtensions->emplace_back(extensionNames[i]);
    }
    requiredExtensions->emplace_back(VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME);
  }
}

void VulkanApp::run() {
  initWindow();
  initVulkan();
  mainLoop();
}

void VulkanApp::initWindow() {
  window = SDL_CreateWindow("SDL2 Window",
		            SDL_WINDOWPOS_CENTERED,
		            SDL_WINDOWPOS_CENTERED,
		            680, 480, 0
		           );
  if (!window) {
    throw std::runtime_error("Failed to create window");
  }
  SDL_Surface *windowSurface = SDL_GetWindowSurface(window);
  if (!windowSurface) {
    throw std::runtime_error("Failed to get surface from window");
  }
}

void VulkanApp::initVulkan() {
  createInstance();
}

void VulkanApp::createInstance() { 
  VkApplicationInfo appInfo{}; 
  createAppInfo(&appInfo);

  unsigned int extensionCount = 0;
  const char ** extensionNames;
  SDL_Vulkan_GetInstanceExtensions(window, &extensionCount, extensionNames);
  std::vector<const char *> requiredExtensions;
  createRequiredExtensions(extensionCount, extensionNames, &requiredExtensions);

  VkInstanceCreateInfo createInfo{};
  createInstanceInfo(&createInfo, &appInfo, &requiredExtensions);  
 
  if (vkCreateInstance(&createInfo, nullptr, &instance) != VK_SUCCESS) {
    throw std::runtime_error("Failed to create VK instance");
  }
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
      SDL_UpdateWindowSurface(window);
    }
  }
}
