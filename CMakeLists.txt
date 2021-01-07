cmake_minimum_required(VERSION 3.17)
project(MyOpenGL)

set(CMAKE_CXX_STANDARD 17)

find_package( OpenGL REQUIRED )

set( GLFW_BUILD_DOCS OFF CACHE BOOL  "GLFW lib only" )
set( GLFW_INSTALL OFF CACHE BOOL  "GLFW lib only" )


add_subdirectory(dependencies/glfw)
add_subdirectory(dependencies/glad)

if( MSVC )
    SET( CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /ENTRY:mainCRTStartup" )
endif ()

set(MyOpenGL-SRC
        src/main.cpp
        src/Renderer.cpp
        src/VertexBuffer.cpp
        src/IndexBuffer.cpp
        src/VertexArray.cpp
        src/Shader.cpp
        src/vendor/stb_image/stb_image.cpp src/Texture.cpp)

add_executable(MyOpenGL WIN32 ${MyOpenGL-SRC})
target_link_libraries(MyOpenGL ${OPENGL_LIBRARIES} glfw glad)
target_include_directories(MyOpenGL PRIVATE ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/src/vendor/stb_image)

if (MSVC)
    if (${CMAKE_VERSION} VERSION_LESS "3.6.0")
        message("\n\t[ WARNING ]\n\n\tCMake version lower than 3.6.\n\n\t - Please update CMake and rerun; OR\n\t - Manually set 'MyOpenGL' as StartUp Project in Visual Studio.\n")
    else ()
        set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT MyOpenGL)
    endif ()
endif ()
