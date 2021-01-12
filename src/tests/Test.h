//
// Created by Thomas Stewart on 2021/01/12.
//

#ifndef MYOPENGL_TEST_H
#define MYOPENGL_TEST_H

namespace test {
    class Test {
    public:
        Test() {}
        virtual ~Test() {}

        virtual void OnUpdate(float deltaTime) {}
        virtual void OnRender() {}
        virtual void OnImGuiRender() {}
    };
}

#endif //MYOPENGL_TEST_H
