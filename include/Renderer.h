//
// Created by Thomas Stewart on 2020/12/21.
//
#ifndef MYOPENGL_RENDERER_H
#define MYOPENGL_RENDERER_H

#include <GLFW/glfw3.h>

#define ASSERT(x) if (!(x)) __builtin_trap();
#define GLCall(x) GLClearError();x;ASSERT(GLLogCall(#x, __FILE__, __LINE__))

void GLClearError();
bool GLLogCall(const char *function, const char *file, int line);

#endif //MYOPENGL_RENDERER_H
