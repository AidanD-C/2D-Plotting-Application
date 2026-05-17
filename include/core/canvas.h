#ifndef FIGURE_H
#define FIGURE_H

#include <GLFW/glfw3.h>

class Canvas
{
    public:

        Canvas(int width, int height);

        ~Canvas();
        
        void show();

    private:
    
        GLFWwindow* window;
        int width, height;
        
        void render();
};

#endif