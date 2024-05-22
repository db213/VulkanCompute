#include <vulkan/vulkan.h>
#include <SDL2/SDL.h>

class VulkanApp {
public:
  void run();

private:
  void initWindow();
  void initVulkan();
  void mainLoop();
  void createInstance();

  SDL_Window * window;
  VkInstance instance = VK_NULL_HANDLE;
};
