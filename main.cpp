#include<GL/glut.h>
#include<iostream>

using namespace std;

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_POLYGON);
  
	// top-left square
	glVertex2f(-0.2, 0.2);
	glVertex2f(-0.9, 0.2);
	glVertex2f(-0.9, 0.9);
	glVertex2f(-0.2, 0.9);
	
	glEnd();
	
	// bottom-right square
	glBegin(GL_POLYGON);
	
	glVertex2f(0.2, -0.2);
	glVertex2f(0.9, -0.2);
	glVertex2f(0.9, -0.9);
	glVertex2f(0.2, -0.9);
	
	glEnd();
	
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("simple");
	glutDisplayFunc(display);
	glutMainLoop();
}
