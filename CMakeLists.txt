# Set the minimum CMake version required to build the project.
cmake_minimum_required(VERSION 3.10)

# Define the project name and version.
project(GeometryDashClone VERSION 1.0)

# Set the C++ standard to C++17. This ensures modern C++ features are available.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find the SFML library package. We specify the required components:
# 'graphics' for rendering, 'window' for window management, and 'audio' for sound.
find_package(SFML 2.5 COMPONENTS graphics window audio REQUIRED)

# Set the include directories for the project. The 'include' folder contains
# all the project's header files.
include_directories(include)

# Add an executable target. This is the main program.
# We list all the source files (`.cpp`) that need to be compiled.
add_executable(GeometryDashClone
    src/Game.cpp
    src/Player.cpp
)

# Link the SFML libraries to the executable.
# This step tells the compiler which libraries to use when building the final program.
# We use 'PUBLIC' to ensure the libraries are also linked for any other targets that depend on this one.
target_link_libraries(GeometryDashClone PUBLIC sfml-graphics sfml-window sfml-audio)