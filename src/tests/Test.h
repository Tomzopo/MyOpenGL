//
// Created by Thomas Stewart on 2021/01/12.
//

#ifndef MYOPENGL_TEST_H
#define MYOPENGL_TEST_H

#include <vector>
#include <iostream>

namespace test {
    class Test {
    public:
        Test() = default;
        virtual ~Test() = default;

        virtual void OnUpdate(float deltaTime) {}
        virtual void OnRender() {}
        virtual void OnImGuiRender() {}
    };

    class TestMenu : public Test {
    public:
        explicit TestMenu(Test *&currentTestPointer);

        void OnImGuiRender() override;

        template<typename T>
        void RegisterTest(const std::string &name) {
            std::cout << "Registering test " << name << std::endl;
            m_Tests.push_back(std::make_pair(name, []() { return new T(); }));
        }

    private:
        Test *&m_CurrentTest;
        std::vector<std::pair<std::string, std::function<Test *()> > > m_Tests;
    };
}

#endif //MYOPENGL_TEST_H
