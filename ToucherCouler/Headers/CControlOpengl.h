#pragma once
// ToucherCouler.h : fichier Include pour les fichiers Include système standard,
// ou les fichiers Include spécifiques aux projets.

#include <iostream>
#include <GLFW/glfw3.h>

// TODO: Référencez ici les en-têtes supplémentaires nécessaires à votre programme.

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

