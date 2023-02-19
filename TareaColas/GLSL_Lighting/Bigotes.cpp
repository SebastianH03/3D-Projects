#include "Bigotes.h"

Bigote::Bigote() {}

void Bigote::DibujarBigote(float a, float x, float y, float z) {

	glPushMatrix(); //general, lo abarca todo

	glPushMatrix();

	glTranslatef(x, y, z);


	glTranslatef(-1.0, 0.0, 0.0);
	glRotatef(a, 0.0, 0.0, 1.0);
	glTranslatef(0.5, 0.0, 0.0);

	glPushMatrix();
	glScalef(8.0, 0.2, 0.5);
	glutSolidCube(1);
	glPopMatrix();

	glPopMatrix();
	glPopMatrix();
}