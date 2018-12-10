double kbdStep = 1;


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
        //animation ctrls
        case 'p':
            carAnim = !carAnim;
        break;
        case 'o':
            ufoAnim = !ufoAnim;
        break;
        case 'i':
            baloonAnim = !baloonAnim;
        break;
        case 'u':
            copterAnim1 = !copterAnim1;
        break;
        case 't':
            copterAnim2 = !copterAnim2;
        break;
        case 'y':
            rocketAnim = !rocketAnim;
        break;
        case 'h':
            planeAnim1 = !planeAnim1;
        break;
        case 'j':
            planeAnim2 = !planeAnim2;
        break;

        //cameras
        case 'l':
            rotate = !rotate;
        break;
        case 'k':
            camRot = 0;
        break;
        case ';':
            top = !top;
        break;

        case 'g':
            globalAnim = !globalAnim;

            carAnim = globalAnim;
            ufoAnim = globalAnim;
            baloonAnim = globalAnim;
            copterAnim1 = globalAnim;
            copterAnim2 = globalAnim;
            rocketAnim = globalAnim;
            planeAnim1 = globalAnim;
            planeAnim2 = globalAnim;

        break;




        //camera control for modeling. Ignore them
        case 'q':
            bx1 += kbdStep;
            std::cout << bx1 << std::endl;
        break;
        case 'a':
            bx2 += kbdStep;
            std::cout << bx2 << std::endl;
        break;
        case 'z':
            bx3 += kbdStep;
            std::cout << bx3 << std::endl;
        break;
        case 'w':
            by1 += kbdStep;
            std::cout << by1 << std::endl;
        break;
        case 's':
            by2 += kbdStep;
            std::cout << by2 << std::endl;
        break;
        case 'x':
            by3 += kbdStep;
            std::cout << by3 << std::endl;
        break;
        case 'e':
            bz1 += kbdStep;
            std::cout << bz1 << std::endl;
        break;
        case 'd':
            bz2 += kbdStep;
            std::cout << bz2 << std::endl;
        break;
        case 'c':
            bz3 += kbdStep;
            std::cout << bz3 << std::endl;
        break;
        /*case 'm':
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
        break;*/
        case 'f':
            a1 += kbdStep; a2 -= kbdStep; a3 += kbdStep; a4 -= kbdStep;
        break;
    }

	glutPostRedisplay();
}


//camera control for modeling. ignore
void keyUp(unsigned char key, int x,int y)
{
    switch(key)
	{
        case 'r':
            kbdStep = -kbdStep;
        break;
    }
}


//camera control for modeling. ignore
void keypressSpecial(int key, int x, int y)
{
    switch(key)
	{
        case GLUT_KEY_LEFT:
            //std::cout << "a" << std::endl;
            a1 -= 0.5;
            a2 -= 0.5;
        break;
        case GLUT_KEY_RIGHT:
            //std::cout << "a" << std::endl;
            a1 += 0.5;
            a2 += 0.5;
        break;
        case GLUT_KEY_UP:
            //std::cout << "a" << std::endl;
            a3 += 0.5;
            a4 += 0.5;
        break;
        case GLUT_KEY_DOWN:
            //std::cout << "a" << std::endl;
            a3 -= 0.5;
            a4 -= 0.5;
        break;
	}

	glutPostRedisplay();
}