//#include "../globals.cpp"

//car
glPushMatrix();
    glTranslated(carTranslationx, carTranslationy, carTranslationz);
	glRotated(carRotationY, 0,1,0);

    //tyre spaces
    double hzlSpace = 1.0;
    double vtclSpace = 2.0;
        //far side tyres
        glColor3f(0.4,0.4,0.4);
        glPushMatrix();
            glTranslated(0, 0.3 ,0); // torus at (0,1,0)
            //glRotated(90.0, 1,0,0);
            glutSolidTorus(0.1, 0.3, 50,50);
        glPopMatrix();

        glPushMatrix();
            glTranslated(vtclSpace, 0.3 ,0); // torus at (0,1,0)
            //glRotated(90.0, 1,0,0);
            glutSolidTorus(0.1, 0.3, 50,50);
        glPopMatrix();
        

    //body
    glPushMatrix();
        glColor3f(0,0,0.5);
        glTranslated(body1, body2, body3);
        glRotated(90.0, 0.0, 90.0, 0);
        glScaled(1,0.5,1);
        GLUquadricObj * qobj = gluNewQuadric();
        gluQuadricDrawStyle(qobj,GLU_FILL);
        gluCylinder(qobj, 0.5, 0.5, 2.0, 40,40);
    glPopMatrix();


    //riders' seats
    glPushMatrix();
        glRotated(-10,0,0,1);
        glScaled(1.6,0.3,1);
        glTranslated(0.4, 1.4 ,0.45);
        glutSolidCube(0.8);
	glPopMatrix();


    //front
    glPushMatrix();
        glTranslated(sphereTranslation1, sphereTranslation2, sphereTranslation3);
        glScaled(2,1,2);
        glColor3f(0.5, 0.4, 0.9);
        glutSolidSphere(0.25, 10, 10);
    glPopMatrix();



    //near side tyres
    glColor3f(0.4,0.4,0.4);
    glPushMatrix();
        glTranslated(vtclSpace, 0.3 ,hzlSpace); // torus at (0,1,0)
        //glRotated(90.0, 1,0,0);
        glutSolidTorus(0.1, 0.3, 50,50);
    glPopMatrix();
    glPushMatrix();
        glTranslated(0, 0.3 ,hzlSpace); // torus at (0,1,0)
        //glRotated(90.0, 1,0,0);
        glutSolidTorus(0.1, 0.3, 50,50);
    glPopMatrix();
glPopMatrix();