//
// Created by Thomas Stewart on 2021/01/12.
//

#ifndef MYOPENGL_TESTCLEARCOLOR_H
#define MYOPENGL_TESTCLEARCOLOR_H

#include "Test.h"

namespace test {
    class TestClearColor : public Test {
    public:
        TestClearColor();
        ~TestClearColor();

        void OnUpdate(float deltaTime) override;
        void OnRender() override;
        void OnImGuiRender() override;
    private:
        float m_ClearColor[4];
    };
}

#endif //MYOPENGL_TESTCLEARCOLOR_H
