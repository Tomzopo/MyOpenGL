//
// Created by Thomas Stewart on 2020/12/25.
//

#ifndef MYOPENGL_SHADER_H
#define MYOPENGL_SHADER_H

#include <string>
#include <unordered_map>

struct ShaderProgramSource {
    std::string VertexSource;
    std::string FragmentSource;
};

class Shader {
private:
    std::string m_FilePath;
    unsigned int m_RendererID;
    std::unordered_map<std::string, unsigned int> m_UniformLocationCache;
public:
    Shader(const std::string &filepath);
    ~Shader();

    void Bind() const;
    void Unbind() const;

    // Set uniforms
    void SetUniform1f(const std::string &name, float value);
    void SetUniform4f(const std::string &name, float v0, float v1, float f2, float f3);

private:
    ShaderProgramSource ParseShader(const std::string &filepath);
    unsigned int CompileShader(unsigned int type, const std::string &source);
    unsigned int CreateShader(const std::string &vertexShader, const std::string &fragmentShader);
    int GetUniformLocation(const std::string &name);

};

#endif //MYOPENGL_SHADER_H
