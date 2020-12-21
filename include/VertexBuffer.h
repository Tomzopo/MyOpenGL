//
// Created by Thomas Stewart on 2020/12/21.
//

#ifndef MYOPENGL_VERTEXBUFFER_H
#define MYOPENGL_VERTEXBUFFER_H


class VertexBuffer {
private:
    unsigned int m_RendererID;
public:
    VertexBuffer(const void* data, unsigned int size);
    ~VertexBuffer();

    void Bind() const;
    void Unbind() const;
};


#endif //MYOPENGL_VERTEXBUFFER_H
