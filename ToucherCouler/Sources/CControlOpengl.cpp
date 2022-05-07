#include "CControlOpengl.h"

CControlOpengl::CControlOpengl()
{
   // init();
}

CControlOpengl::~CControlOpengl()
{

}

void CControlOpengl::init()
{
    /* Initialize the library */
    if (!glfwInit())
        std::cerr << "error init Library" << std::endl;
    
    //Version d'openGL
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    
    //On utilise pas
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    /* Create a windowed mode window and its OpenGL context */
    m_pwindow = glfwCreateWindow(m_windowWith, m_windowHeight, "m_windowsTitle", NULL, NULL);
    if (!m_pwindow)
    {
        glfwTerminate();
        std::cerr << "error create Window" << std::endl;
        return;
    }
}

void CControlOpengl::loadWindow()
{

    /* Make the window's context current */
   // glfwMakeContextCurrent(m_pwindow);
    glClearColor(0.4f, 0.3f, 0.4f, 0.0f);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(m_pwindow))
    {
        /* Render here */
       // glClearColor(250.0f / 255.0f, 119.0f / 255.0f, 110.0f / 255.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(m_pwindow);

        /* Poll for and process events */
        glfwPollEvents();
    }
    close();
}

void CControlOpengl::run()
{
    loadWindow();
}

void CControlOpengl::close()
{
    glfwTerminate();
}
