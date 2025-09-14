# Geometry Dash Clone

A simple clone of the popular rhythm-based platformer, Geometry Dash. This project is build using C++ and SFML to demonstrate fundamental game development conepts, including event handling, physics simulation, and sprite rendering.

## Features

- **Player Control**: Move the player character(a cube) and make it jump.
- **Obstacle Generation**: Procedurally generated obstacles to challenge the player.
- **Collision Detection**: Accurate collision detection between the player and obstacles, triggering a game over.
- **Basic Scoring**: A simple system to track how far the player has traveled.

## Getting Started

To build and run this project, you'll need to have the necessary tools and libraries installed.

### Prerequisites

- **CMake**: A cross-platform build system. Version 3.10 or higher is recommended.
- **C++ Compiler**: A modern C++ compiler like g++ (on Linux/macOS) or MSVC (on Windows).
- **SFML**: The Simple and Fast Multimedia Library, used for graphics, audio, and input. Ensure you have version 2.5.1 or later.

### Building the project

Follow these steps to build the game from the source code:

1. **Clone the repository**:
   ```bash
   git clone [https://github.com/Logan-CodingTech/GeometryDash---GameForMyOwn.git](https://github.com/Logan-CodingTech/GeometryDash---GameForMyOwn.git)
   ```

2. **Create a build directory**:
   ```bash
   mkdir build
   cd build
   ```

3. **Geerate build files with CMake**:
   ```bash
   cmake ..
   ```

4. **Compile the project**:
   ```bash
   cmake --bulid .
   ```

### Playing the Game

Once the build is complete, you'll find the executable in the `bin/` directory. Simply run it to start playing.

```bash
./bin/GeometryDash---GameForMyOwn
```

### Contributing
We welcome contributions! If you have suggestions for new features, bug fixes, or improvements, please feel free to open an issue or submit a pull request.

### License
This project is licensed under the MIT License.
