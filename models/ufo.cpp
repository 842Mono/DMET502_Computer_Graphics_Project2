glPushMatrix();
    glTranslated(0,ufoVerticalTranslation,9);
    //glTranslated(ufoXTranslation,ufoVerticalTranslation,ufoZTranslation);


    //legs
    glPushMatrix();
        glRotated(180,1,0,0);
        glTranslated(0,-1.5,0);

        glTranslated(0,1.2,0);
        glColor3f(0.7,0.7,0.7);
        glPushMatrix();
            //glTranslated(-0.8, 2.4, 0.1);
            glTranslated(0,0,-0.5);
            glRotated(10.0, -1, 0, 0);
            glRotated(90, -1,0,0);
            //glScaled(1,0.5,1);
            GLUquadricObj * qobj18 = gluNewQuadric();
            gluQuadricDrawStyle(qobj18, GLU_FILL);
            gluCylinder(qobj18, 0.05, 0.05, 1, 20,20);
        glPopMatrix();

        glColor3f(0.7,0.7,0.7);
        glPushMatrix();
            //glTranslated(0.25, 1.2, 0.45);
            glTranslated(-0.5,0,0);
            glRotated(10.0, 0, 0, 1);
            glRotated(90, -1,0,0);
            //glScaled(1,0.5,1);
            GLUquadricObj * qobj20 = gluNewQuadric();
            gluQuadricDrawStyle(qobj20, GLU_FILL);
            gluCylinder(qobj20, 0.05, 0.05, 1, 20,20);
        glPopMatrix();
    glPopMatrix();



    glPushMatrix();
        glRotated(180,1,0,0);
        glTranslated(0,-1.5,0);

        glTranslated(0,1.2,0);
        glColor3f(0.7,0.7,0.7);
        glPushMatrix();
            //glTranslated(-0.8, 2.4, 0.1);
            glTranslated(0,0,0.5);
            glRotated(10.0, 1, 0, 0);
            glRotated(90, -1,0,0);
            //glScaled(1,0.5,1);
            GLUquadricObj * qobj19 = gluNewQuadric();
            gluQuadricDrawStyle(qobj19, GLU_FILL);
            gluCylinder(qobj19, 0.05, 0.05, 1, 20,20);
        glPopMatrix();    
        

        glColor3f(0.7,0.7,0.7);
        glPushMatrix();
            //glTranslated(0.55, 1.2, 0.1);
            glTranslated(0.5,0,0);
            glRotated(90, 0, 1, 0);
            glRotated(80.0, -1, 0, 0);
            //glScaled(1,0.5,1);
            GLUquadricObj * qobj17 = gluNewQuadric();
            gluQuadricDrawStyle(qobj17, GLU_FILL);
            gluCylinder(qobj17, 0.05, 0.05, 1, 20,20);
        glPopMatrix();
    glPopMatrix();





    glColor3f(0.729, 0.333, 0.827);
    glPushMatrix();
        //glScaled(1,0.4,1);
	    glTranslated(0,0.5,0);
	    glutSolidSphere(0.5, 30,30);
    glPopMatrix();



    glColor3f(0.855, 0.439, 0.839);
    glPushMatrix();
        glScaled(1,0.4,1);
	    glTranslated(0,1,0);
	    glutSolidSphere(1, 30,30);
    glPopMatrix();









glPopMatrix();


