#include <cstdlib>
#include <iostream>

#include "VulkanApp.hpp"


int main() {
  VulkanApp app;

  try {
    app.run();
  } catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
