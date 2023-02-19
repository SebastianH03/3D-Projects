#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

class Cola
{
public:

	Cola();

	void DibujarCola(float a, int c, float x, float y, float z, float f);
};