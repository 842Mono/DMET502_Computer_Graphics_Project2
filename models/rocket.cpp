glPushMatrix();
    glTranslated(0,0,-6);
    glTranslated(0,rocketVertical,0);

    //rear blades
    glColor3f(0.275, 0.510, 0.706);
    glPushMatrix();
        glRotated(180,0,-1,0);
        glTranslated(0, 0 , 0.5);
        glRotated(45,1,0,0);
        glScaled(0.3,1.3,3);
	    glutSolidCube(0.25);
	glPopMatrix();

    glColor3f(0.275, 0.510, 0.706);
    glPushMatrix();
        glRotated(90,0,-1,0);
        glTranslated(0, 0 , 0.5);
        glRotated(45,1,0,0);
        glScaled(0.3,1.3,3);
	    glutSolidCube(0.25);
	glPopMatrix();


    //top sphere
    glColor3f(0.439, 0.502, 0.565);
    glPushMatrix();
        glScaled(0.6,1.4,0.6);
	    glTranslated(0,1.4,0);
	    glutSolidSphere(0.5, 30,30);
    glPopMatrix();


    //body
    glColor3f(0.467, 0.533, 0.600);
	glPushMatrix();
		glTranslated(0, 2, 0);
		glRotated(90.0, 1, 0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj21 = gluNewQuadric();
		gluQuadricDrawStyle(qobj21, GLU_FILL);
		gluCylinder(qobj21, 0.3, 0.3, 2, 20,20);
    glPopMatrix();
    

    //front blades
    glColor3f(0.275, 0.510, 0.706);
    glPushMatrix();
        glTranslated(0, 0 , 0.5);
        glRotated(45,1,0,0);
        glScaled(0.3,1.3,3);
	    glutSolidCube(0.25);
	glPopMatrix();

    glColor3f(0.275, 0.510, 0.706);
    glPushMatrix();
        glRotated(90,0,1,0);
        glTranslated(0, 0 , 0.5);
        glRotated(45,1,0,0);
        glScaled(0.3,1.3,3);
	    glutSolidCube(0.25);
    glPopMatrix();


    //torus??
    // glPushMatrix();
    //     glTranslated(0, 0.3 ,0);
    //     glRotated(90.0, 1,0,0);
    //     glutSolidTorus(0.1, 0.3, 50,50);
    // glPopMatrix();




glPopMatrix();