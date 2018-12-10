#include <GL/glew.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>

#include <stdio.h>
#include <iostream>
#include <math.h>

#include "./globals.cpp"


void axis(double length)
{ // draw a z-axis, with cone at end
	glPushMatrix();

	glBegin(GL_LINES);
	glVertex3d(0, 0, 0);
	glVertex3d(0,0,length); // along the z-axis
	glEnd();

	glTranslated(0, 0,length -0.2);
	glutWireCone(0.04, 0.2, 12, 9);

	glPopMatrix();
}

void SetupLights()
{
	// Enable Lighting for this OpenGL Program
	glEnable(GL_LIGHTING);

	// Enable Light Source number 0
	// OpengL has 8 light sources
	glEnable(GL_LIGHT0);

	// Define Light source 0 ambient light
	GLfloat ambient[] = { 0.1f, 0.1f, 0.1, 1.0f };
	glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);

	// Define Light source 0 diffuse light
	GLfloat diffuse[] = { 0.5f, 0.5f, 0.5f, 1.0f };
	glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);

	// Define Light source 0 Specular light
	GLfloat specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	glLightfv(GL_LIGHT0, GL_SPECULAR, specular);

	// Finally, define light source 0 position in World Space
	GLfloat light_position[] = { 0.0f, 10.0f, 0.0f, 1.0f };
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
}

void camera(void)
{
	if(top)
	{
		glMatrixMode(GL_PROJECTION); // set the view volume shape
		glLoadIdentity();
		glOrtho(a1, a2, a3, a4, a5, a6);
		glMatrixMode(GL_MODELVIEW); // position and aim the camera
		glLoadIdentity();
		gluLookAt(1,isometric,0,  0,0,0,  0,1,0);
	}
	else
	{
		glMatrixMode(GL_PROJECTION); // set the view volume shape
		glLoadIdentity();
		glOrtho(a1, a2, a3, a4, a5, a6);
		glMatrixMode(GL_MODELVIEW); // position and aim the camera
		glLoadIdentity();
		gluLookAt(bx1+cos(camRot)*isometric - isometric, by1, bz1+(sin(camRot))*isometric - isometric, bx2, by2, bz2, bx3, by3, bz3);
	}
	
	glColor3d(0,0,0); // draw black lines
}

void display(void)
{
	SetupLights();
	camera();

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // clear the screen

	//visualisations
	axis(0.5); // z-axis
	glPushMatrix();
		glRotated(90, 0,1.0, 0);
		axis(0.9); //x  // y-axis
		glRotated(-90.0, 1, 0, 0);
		axis(1.5); //y   // z-axis
	glPopMatrix();

	// glPushMatrix();
	// 	glTranslated(0, 1.0 ,0); // torus at (0,1,0)
	// 	glRotated(90.0, 1,0,0);
	// 	glutWireTorus(0.1, 0.3, 10,10);
	// glPopMatrix();

	glPushMatrix();
		glTranslated(0.5, 0.5, 0.5); // big cube at (0.5, 0.5, 0.5)
		glutWireCube(1.0);
	glPopMatrix();

	#include "./models/hangar.cpp"

	#include "./models/car.cpp"

	#include "./models/helicopter.cpp"
	
	#include "./models/plane.cpp"

	#include "./models/baloon.cpp"

	//ship?

	#include "./models/ufo.cpp"

	#include "./models/rocket.cpp"

	//tank?

	// glPushMatrix();
	// 	glTranslated(3,0,0);
	// 	glScaled(2,2,2);
	// 	triangularPrism();
	// glPopMatrix();


	glFlush();
}

#include "./keyboard.cpp"
#include "./animation.cpp"


// void spe(int k, int x,int y)
// {
// 	if(k==GLUT_LEFT_BUTTON)//if the right arrow is pressed, then the object will be translated in the x axis by 10. (moving right)
// 	{a2+=0.1; a1+= 0.1;}
// 	glutPostRedisplay();//redisplay to update the screen with the changes
// }


int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(640,480);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Grrrrrrrrrrrrrrr");
	//GLenum err = glewInit();

	initBezier();

	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutKeyboardUpFunc(keyUp);
	
	glutIdleFunc(Animation);
	glutSpecialFunc(keypressSpecial);
	glClearColor(0.878, 1.000, 1.000, 0);//glClearColor(1.0f, 1.0f, 1.0f,0.0f); // background is white
	
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);

	glShadeModel(GL_SMOOTH);
	
	glViewport(0, 0, 640, 480);
	glutMainLoop();
}
