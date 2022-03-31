#include <iostream>
#include <GL/freeglut.h>
#include <GL/glut.h>

static void RenderSceneCB()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

static void glutInitial(int argc, char**argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	glutInitWindowSize(800,1024);
	glutInitWindowPosition(100,100);
}

int main(int argc, char**argv)
{
	glutInitial(argc,argv);

	glutCreateWindow("Tutorial 1");
	glutDisplayFunc(RenderSceneCB);

	glClearColor(0.0f,0.0f,0.0f,0.0f);
	glutMainLoop();
}
