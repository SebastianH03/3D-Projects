#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

class Cubos
{
public:

	Cubos();

	void DibujarCubos(float angle, float fx, float fy, float fz, float x, float y, float z);
};