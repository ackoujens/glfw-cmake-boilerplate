// TODO Make available by calling "#include <Application>"

#include "Application/Application.hpp"

// #include <OpenGL/gl.h>
#include <OpenGL/gl3.h>
#include <GLFW/glfw3.h>

class my_application : public Application {
public:

  // Override Virtual Render Function
  void render(double currentTime) {
    static const GLfloat red[] = { 1.0f, 0.0f, 0.0f, 1.0f };
    glClearBufferfv(GL_COLOR, 0, red);
  }
};

DECLARE_MAIN(my_application);