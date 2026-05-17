#include <glad/gl.h>
#include "core\canvas.h"
#include <stdexcept>
#include <iostream>

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}

void processInput(GLFWwindow *window)
{
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

Canvas::Canvas(int width, int height) : width(width), height(height)
{
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_SAMPLES, 4);

    GLFWwindow* window = glfwCreateWindow(width, height, "Canvas", NULL, NULL);
    glfwMakeContextCurrent(window);
    
    // initializing GLAD
    if (!gladLoadGL((GLADloadfunc)glfwGetProcAddress))
    {
        throw std::runtime_error("Failed to initialize GLAD");
    }

    glEnable(GL_MULTISAMPLE);

    glViewport(0, 0, width, height);

    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
}

Canvas::~Canvas()
{
    glfwTerminate();
}

void Canvas::show()
{
    while (!glfwWindowShouldClose(window))
    {
        processInput(window);
        render();
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}

void Canvas::render()
{

}

