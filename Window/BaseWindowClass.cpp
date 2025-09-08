#include "BaseWindowClass.h"

#include <iostream>
#include <map>
#include <string>

// Include the necessary ImGui, GLFW, and OpenGL headers.
// These are the three core components of your setup.
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <GLFW/glfw3.h>

#include "../DataTypes/Shape.h"

using namespace std;

static map<string, BaseWindowClass> Windows = {};


// A simple utility function to handle GLFW errors.
void GLFWError(int error, const char* description) {
    cerr << "GLFW Error: " << error << description << endl;
}


Vector2 GetWindowPosition(Dimension2 Position, BaseWindowClass Window) {
    
}


WindowInitConfig::WindowInitConfig(bool Resizable,
    bool Visible,
    bool Decorated,
    bool OnTop,
    bool Maximized,
    Dimension2 Size,
    Dimension2 Position) :
    Resizable(Resizable),
    Visible(Visible),
    Decorated(Decorated),
    OnTop(OnTop),
    Maximized(Maximized),
    Size(Size),
    Position(Position) {
}

WindowInitConfig::WindowInitConfig(bool Resizable,
    bool Visible, 
    Dimension2 Size,
    Dimension2 Position) :
    WindowInitConfig(Resizable,
        true,
        true,
        false,
        false,
        Size,
        Position) {
 
}

WindowInitConfig::WindowInitConfig(Dimension2 Size, Dimension2 Position) :
    WindowInitConfig(true,
        true,
        Size,
        Position) {

}

void SetWindowHints(const WindowInitConfig& windowConfig) {
    // Window State and Behavior Hints
    glfwWindowHint(GLFW_RESIZABLE, windowConfig.Resizable);
    glfwWindowHint(GLFW_VISIBLE, windowConfig.Visible);
    glfwWindowHint(GLFW_DECORATED, windowConfig.Decorated);
    glfwWindowHint(GLFW_FLOATING, windowConfig.OnTop);
    glfwWindowHint(GLFW_MAXIMIZED, windowConfig.Maximized);

    /*
    // OpenGL Context Creation Hints
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, openglConfig.MajorVersion);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, openglConfig.MinorVersion);
    glfwWindowHint(GLFW_OPENGL_PROFILE, static_cast<int>(openglConfig.Profile));
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, openglConfig.ForwardCompatibility);

    // Buffer and Pixel Format Hints
    glfwWindowHint(GLFW_RED_BITS, openglConfig.ColorLimits.Red);
    glfwWindowHint(GLFW_GREEN_BITS, openglConfig.ColorLimits.Green);
    glfwWindowHint(GLFW_BLUE_BITS, openglConfig.ColorLimits.Blue);
    glfwWindowHint(GLFW_ALPHA_BITS, openglConfig.ColorLimits.Alpha);
    glfwWindowHint(GLFW_DEPTH_BITS, openglConfig.DepthBits);
    glfwWindowHint(GLFW_STENCIL_BITS, openglConfig.StencilBits);
    */
}

BaseWindowClass::BaseWindowClass(string ID, WindowInitConfig Config) : ID(ID) {
    SetWindowHints(Config);
    // Create the window
    
    GLFWwindow* window = glfwCreateWindow(
        Config.Size::,
        windowConfig.Height,
        windowConfig.Title,
        nullptr,
        nullptr
    );
}




bool BaseWindowClass::Initialize() {

    // Set the error callback
    glfwSetErrorCallback(GLFWError);

    // Initialize GLFW
    if (!glfwInit()) {
        cerr << "Failed to initialize GLFW" << endl;
        return false;
    }

    // 1. Create the ImGui context
    IMGUI_CHECKVERSION();
   
    return true;
}