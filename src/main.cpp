#include <SDL2/SDL.h>
#include <cstdlib>
#include <iostream>


class HelloTriangleApplication {
public:
  void run() {
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
  }

private:
  void initWindow() {
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

  void initVulkan() {}
  
  void mainLoop() {
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

  void cleanup() {}

  SDL_Window *window;
};

int main() {
  HelloTriangleApplication app;

  try {
    app.run();
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
