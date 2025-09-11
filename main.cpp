#include "Window\BaseWindowClass.h"

#include <string>



int main() {
    BaseWindowClass::Initialize();
    Scale2 Example = Scale2(0.0f);
    WindowInitConfig NewConfig = WindowInitConfig(true,true,Example,Example);
    BaseWindowClass newWindow = BaseWindowClass("Test",NewConfig);

    return 0;
}