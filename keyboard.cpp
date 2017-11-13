#include <GL/glew.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>

double kbdStep = 0.1;


void keypressSpecial(int key, int x, int y)
{
    switch(key)
	{
        case GLUT_KEY_LEFT:
            //std::cout << "a" << std::endl;
            a1 += 0.05;
            a2 += 0.05;
        break;
        case GLUT_KEY_RIGHT:
            //std::cout << "a" << std::endl;
            a1 -= 0.05;
            a2 -= 0.05;
        break;
        case GLUT_KEY_UP:
            //std::cout << "a" << std::endl;
            a3 -= 0.05;
            a4 -= 0.05;
        break;
        case GLUT_KEY_DOWN:
            //std::cout << "a" << std::endl;
            a3 += 0.05;
            a4 += 0.05;
        break;
	}

	glutPostRedisplay();
}

void keyUp(unsigned char key, int x,int y)
{
    switch(key)
	{
        case 'r':
            kbdStep = -kbdStep;
        break;
    }
}

void keyboard (unsigned char key, int x, int y)
{
    // if(glutGetModifiers() == GLUT_ACTIVE_SHIFT)
    // {
    //     kbdStep = 0.1;
    // }
    // else
    // {
    //     kbdStep = -0.1;
    // }

    switch(key)
	{
        case 'q':
            bx1 += kbdStep;
            std::cout << bx1 << std::endl;
        break;
        case 'w':
            bx2 += kbdStep;
            std::cout << bx2 << std::endl;
        break;
        case 'e':
            bx3 += kbdStep;
            std::cout << bx3 << std::endl;
        break;
        case 'a':
            by1 += kbdStep;
            std::cout << by1 << std::endl;
        break;
        case 's':
            by2 += kbdStep;
            std::cout << by2 << std::endl;
        break;
        case 'd':
            by3 += kbdStep;
            std::cout << by3 << std::endl;
        break;
        case 'z':
            bz1 += kbdStep;
            std::cout << bz1 << std::endl;
        break;
        case 'x':
            bz2 += kbdStep;
            std::cout << bz2 << std::endl;
        break;
        case 'c':
            bz3 += kbdStep;
            std::cout << bz3 << std::endl;
        break;

        case 'm':
            copterRotation1 += kbdStep;
            std::cout << copterRotation1 << std::endl;
        break;
        case 'n':
            copterRotation2 += kbdStep;
            std::cout << copterRotation2 << std::endl;
        break;
        case 'b':
            copterRotation3 += kbdStep;
            std::cout << copterRotation3 << std::endl;
        break;
        case 'v':
            copterRotation4 += kbdStep;
            std::cout << copterRotation4 << std::endl;
        break;
    }

	glutPostRedisplay();
}