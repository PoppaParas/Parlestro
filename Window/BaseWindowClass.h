#pragma once

#include <GLFW/glfw3.h>
#include <string>

#include "../DataTypes/Shape.h"

using namespace std;

enum class OpenGLProfile {
    Core = GLFW_OPENGL_CORE_PROFILE,
    Compatibility = GLFW_OPENGL_COMPAT_PROFILE,
    Any = GLFW_OPENGL_ANY_PROFILE
};

struct ColorBitLimit {
    int Red;
    int Green;
    int Blue;
    int Alpha;
    ColorBitLimit() : Red(8), Green(8), Blue(8), Alpha(8) {};
    ColorBitLimit(int Bits) : Red(Bits), Green(Bits), Blue(Bits), Alpha(Bits) {};
};


struct WindowInitConfig {
    bool Resizable;
    bool Visible;
    bool Decorated;
    bool OnTop;
    bool Maximized;
    Dimension2 Size;
    Dimension2 Position;
    WindowInitConfig(Dimension2 Size, Dimension2 Position);
    WindowInitConfig(bool Resizable, bool Visible, Dimension2 Size, Dimension2 Position);
    WindowInitConfig(bool Resizable, bool Visible, bool Decorated, bool OnTop, bool Maximized, Dimension2 Size, Dimension2 Position);
};

struct OpenGLConfig {
    int MajorVersion;
    int MinorVersion;
    OpenGLProfile Profile;
    bool ForwardCompatibility;
    ColorBitLimit ColorLimits;
    int DepthPrescisionLimit;
    int PriorityMaskLimit;
};

class BaseWindowClass
{
public:
	//BaseWindowClass(string ID);
	BaseWindowClass(string ID, WindowInitConfig Config);
	//~BaseWindowClass();

	BaseWindowClass(const BaseWindowClass&) = delete;

	BaseWindowClass& operator=(const BaseWindowClass&) = delete;

	/*void SetWidth(int Amount);
	void SetHeight(int Amount);
	void SetSize(int Width, int Height);
	void SetPosition(Dimension2 Position);
	int GetPosition();
	int GetSize();
    BaseWindowClass* GetParent(bool Recursive);*/
	static bool Initialize();
private:
	int Width;
	int Height;
	string ID;
    BaseWindowClass* Parent;

};

