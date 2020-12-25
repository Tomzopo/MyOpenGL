//
// Created by Thomas Stewart on 2020/12/24.
//

#ifndef MYOPENGL_VERTEXARRAY_H
#define MYOPENGL_VERTEXARRAY_H

#include "VertexBuffer.h"
#include "VertexBufferLayout.h"


class VertexArray {
private:
    unsigned int m_RendererID;
public:
    VertexArray();
    ~VertexArray();

    void AddBuffer(const VertexBuffer &vb, const VertexBufferLayout &layout) const;

    void Bind() const;
    void Unbind() const;
};


#endif //MYOPENGL_VERTEXARRAY_H
