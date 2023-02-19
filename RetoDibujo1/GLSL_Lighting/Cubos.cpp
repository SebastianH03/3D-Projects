#include "Cubos.h"

Cubos::Cubos()
{}

void Cubos::DibujarCubos(float angle, float fx, float fy, float fz, float x, float y, float z)
{
    glPushMatrix();
    glTranslatef(x, y, z);
    glutSolidCube(3);
    glRotatef(angle, fx, fy, fz);
    glEnd();
    glPopMatrix();
}