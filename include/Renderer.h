//
// Created by Thomas Stewart on 2020/12/21.
//
#ifndef MYOPENGL_RENDERER_H
#define MYOPENGL_RENDERER_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "VertexArray.h"
#include "IndexBuffer.h"
#include "Shader.h"

#define ASSERT(x) if (!(x)) __builtin_trap()
#define GLCall(x) GLClearError();x;ASSERT(GLLogCall(#x, __FILE__, __LINE__))

void GLClearError();
bool GLLogCall(const char *function, const char *file, int line);

class Renderer {
public:
    void Clear() const;
    void Draw(const VertexArray &va, const IndexBuffer &ib, const Shader &shader) const;
};

#endif //MYOPENGL_RENDERER_H
