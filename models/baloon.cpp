glPushMatrix();
    glTranslated(0,0,6);
    //glTranslated(0,0,baloonTranslationZ);
    glRotated(baloonRotAnim, 1,0,0);

    //far ropes
    glPushMatrix();
        glTranslated(0,1.2,0);
        glColor3f(0.7,0.7,0.7);
        glPushMatrix();
            //glTranslated(-0.8, 2.4, 0.1);
            glTranslated(0,0,-0.5);
            glRotated(10.0, -1, 0, 0);
            glRotated(90, -1,0,0);
            //glScaled(1,0.5,1);
            GLUquadricObj * qobj15 = gluNewQuadric();
            gluQuadricDrawStyle(qobj15, GLU_FILL);
            gluCylinder(qobj15, 0.05, 0.05, 1.3, 20,20);
        glPopMatrix();

        glColor3f(0.7,0.7,0.7);
        glPushMatrix();
            //glTranslated(0.25, 1.2, 0.45);
            glTranslated(-0.5,0,0);
            glRotated(10.0, 0, 0, 1);
            glRotated(90, -1,0,0);
            //glScaled(1,0.5,1);
            GLUquadricObj * qobj13 = gluNewQuadric();
            gluQuadricDrawStyle(qobj13, GLU_FILL);
            gluCylinder(qobj13, 0.05, 0.05, 1.3, 20,20);
        glPopMatrix();
    glPopMatrix();


    //body
    glColor3f(0.824, 0.412, 0.118);
	glPushMatrix();
		glTranslated(0, 0.5, 0);
		glRotated(90.0, -1, 0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj11 = gluNewQuadric();
		gluQuadricDrawStyle(qobj11, GLU_FILL);
		gluCylinder(qobj11, 0.5, 0.6, 0.7, 20,20);
    glPopMatrix();

    //cover
    glColor3f(0.871, 0.722, 0.529);
	glPushMatrix();
		glTranslated(0, 1.2, 0);
		glRotated(90.0, -1, 0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj12 = gluNewQuadric();
		gluQuadricDrawStyle(qobj12, GLU_FILL);
		gluCylinder(qobj12, 0.6, 0.01, 0.05, 20,20);
    glPopMatrix();
    

    //baloon
    glColor3f(0.722, 0.525, 0.043);
	glPushMatrix();
	    glTranslated(0,3,0);
	    glutSolidSphere(1, 30,30);
    glPopMatrix();
    

    //near ropes
    glPushMatrix();
        glTranslated(0,1.2,0);
        glColor3f(0.7,0.7,0.7);
        glPushMatrix();
            //glTranslated(-0.8, 2.4, 0.1);
            glTranslated(0,0,0.5);
            glRotated(10.0, 1, 0, 0);
            glRotated(90, -1,0,0);
            //glScaled(1,0.5,1);
            GLUquadricObj * qobj16 = gluNewQuadric();
            gluQuadricDrawStyle(qobj16, GLU_FILL);
            gluCylinder(qobj16, 0.05, 0.05, 1.3, 20,20);
        glPopMatrix();    
        

        glColor3f(0.7,0.7,0.7);
        glPushMatrix();
            //glTranslated(0.55, 1.2, 0.1);
            glTranslated(0.5,0,0);
            glRotated(90, 0, 1, 0);
            glRotated(80.0, -1, 0, 0);
            //glScaled(1,0.5,1);
            GLUquadricObj * qobj14 = gluNewQuadric();
            gluQuadricDrawStyle(qobj14, GLU_FILL);
            gluCylinder(qobj14, 0.05, 0.05, 1.3, 20,20);
        glPopMatrix();
    glPopMatrix();
    

glPopMatrix();