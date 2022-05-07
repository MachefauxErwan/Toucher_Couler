#pragma once
// ToucherCouler.h : fichier Include pour les fichiers Include syst�me standard,
// ou les fichiers Include sp�cifiques aux projets.

#include <iostream>
#include <GLFW/glfw3.h>

// TODO: R�f�rencez ici les en-t�tes suppl�mentaires n�cessaires � votre programme.

class CControlOpengl
{
public:
	CControlOpengl();
	~CControlOpengl();
	void init();
	void loadWindow();
	void run();
	void close();
private:
	GLFWwindow* m_pwindow;
	const int m_windowWith = 1280;
	const int m_windowHeight = 750;
	const char* m_windowsTitle = "Toucher Couler";
};

