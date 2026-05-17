# 2D-Plotting-Library
The goal of this repo is to build a 2D plotting application using OpenGL capable of creating all sorts of different kinds of plots useful to physicists and mathematicians. Here's a list of capabilities I hope to implement:
- vector field plotting
- plotting scalar functions using color plots
- plotting functions of x,y
- plotting functions of x
- ...

## Dependencies

This project requires GLFW. Download and compile GLFW from [glfw.org/download.html](https://www.glfw.org/download.html), then update the paths in `CMakeLists.txt` to point to your compiled library and headers.

In `CMakeLists.txt`:
```cmake
include_directories(
    "path to your GLFW include directory"
    "include"
)

link_directories("path to your GLFW lib directory")
```