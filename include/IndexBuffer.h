//
// Created by Thomas Stewart on 2020/12/21.
//

#ifndef MYOPENGL_INDEXBUFFER_H
#define MYOPENGL_INDEXBUFFER_H


class IndexBuffer {
private:
    unsigned int m_RendererID;
    unsigned int m_Count;
public:
    IndexBuffer(const unsigned int* data, unsigned int count);
    ~IndexBuffer();

    void Bind() const;
    void Unbind() const;

    inline unsigned int GetCount() const {return m_Count;}
};


#endif //MYOPENGL_INDEXBUFFER_H
