#include "Colas.h"

Cola::Cola()
{}

void Cola::DibujarCola(float a, int c, float x, float y, float z, float f) {

	glPushMatrix(); //general, lo abarca todo

	glPushMatrix();

	glTranslatef(x, y, z);


	glTranslatef(-1.0, 0.0, 0.0);
	glRotatef(0.0, 0.0, 0.0, 1.0);
	glTranslatef(f, 0.0, 0.0);

	//glPushMatrix();
	//glScalef(2.0, 0.4, 1.0);
	//glutSolidCube(1);
	//glPopMatrix();

	for (int i = 0; i < c; i++)
	{
		glTranslatef(1.0, 0.0, 0.0);
		glRotatef(a, 0.0, 0.0, 1.0);
		glTranslatef(f, 0.0, 0.0);

		glPushMatrix();
		glScalef(1.0, 0.4, 1.0);
		glutSolidCube(1);
		glPopMatrix();
	}

	glPopMatrix();
	glPopMatrix();
}