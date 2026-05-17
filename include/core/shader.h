#ifndef SHADER_H
#define SHADER_H

#include <glad/gl.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
public:
    
    unsigned int ID; // the program ID

    Shader(const char* vertexPath, const char* fragmentPath); // reads shader source code and builds shader program
    
    ~Shader();

    void activate(); // activate the shader

    // utility uniform functions
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
};

#endif