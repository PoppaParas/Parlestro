cmake_minimum_required(VERSION 3.10)

project(Parlestro VERSION 1.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(GLFW3 REQUIRED)
find_package(glad REQUIRED)
find_package(imgui REQUIRED)

target_link_libraries(Parlestro
PRIVATE
GLFW::GLFW
glad::glad
imgui::imgui
)

add_executable(Parlestro ${SOURCES})

file(GLOB_RECURSE INCLUDES CONFIGURE_DEPENDS "include/.h" "src/.h" "/include/*.h" "/src/*.h")
target_include_directories(Parlestro
PUBLIC
${CMAKE_SOURCE_DIR}
${CMAKE_SOURCE_DIR}/Window