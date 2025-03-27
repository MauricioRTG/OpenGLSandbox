#include "Renderer.h"

#include <iostream>

void GLClearError()
{
    while (glGetError() != GL_NO_ERROR); //provides errors until there is no more errors
}

bool GLLogCall(const char* function, const char* file, int line)
{
    while (GLenum error = glGetError()) //If there is an error then display it.
    {
        std::cout << "[OpenGL Error] (" << error << "): " << function << " " << ":" << line << std::endl;
        return false;
    }
    return true;
}

void Renderer::Clear() const
{
    GLCall(glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT));
}

void Renderer::Draw(const VertexArray& va, const Shader& shader) const
{
    shader.Bind();
    va.Bind();
    //ib.Bind();
    //GLCall(glDrawElements(GL_TRIANGLES, ib.GetCount(), GL_UNSIGNED_INT, nullptr));
    glDrawArrays(GL_TRIANGLES, 0, 36);
}
