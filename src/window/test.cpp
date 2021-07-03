#include <string>
#include <iostream>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include "window.hpp"

#include <typeinfo>

int main () {
    std::cout << typeid(VK_QUEUE_GRAPHICS_BIT).name() << std::endl;
    
    Window main_window;
    
    main_window.ini();
    
    main_window.window_handler.main_loop();
}