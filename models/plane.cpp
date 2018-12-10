glPushMatrix();
	glTranslated(0,0,-1.5);
	glTranslated(planeTranslationx, planeTranslationy, planeTranslationz);
	glRotated(planeRotationY, 0,1,0);


	//rear wing
	glColor3f(0.255, 0.412, 0.882);
	glPushMatrix();
		glTranslated(1.5,1.1,-1.5);
		glScaled(1,0.2,5);
		glutSolidCube(0.5);
	glPopMatrix();



	//tails
	glColor3f(0.255, 0.412, 0.882);
	glPushMatrix();
		glTranslated(-0.15,1.3,0);
		glRotated(tailsDegree,0,0,1);
		glScaled(0.7,2,0.07);
		glutSolidCube(0.5);
	glPopMatrix();

	glColor3f(0.255, 0.412, 0.882);
	glPushMatrix();
		glTranslated(-0.15,1.1,-0.3);
		glRotated(tailsDegree,0,1,0);
		glScaled(0.7,0.07,2);
		glutSolidCube(0.5);
	glPopMatrix();

	glColor3f(0.255, 0.412, 0.882);
	glPushMatrix();
		glTranslated(-0.15,1.1,0.3);
		glRotated(-tailsDegree,0,1,0);
		glScaled(0.7,0.07,2);
		glutSolidCube(0.5);
	glPopMatrix();



	//rear cubes
	// glPushMatrix();
	// 	glTranslated(0,0.05,0);
	// 	glScaled(0.95,0.95,0.95);
	// 	glColor3f(0.255, 0.412, 0.882);
	// 	glPushMatrix();
	// 		glTranslated(-0.15,1.05,0);
	// 		glScaled(1,0.5,1);
	// 		glutSolidCube(0.5);
	// 	glPopMatrix();

	// 	glColor3f(0.255, 0.412, 0.882);
	// 	glPushMatrix();
	// 		glTranslated(-0.15,0.95,0);
	// 		glRotated(-20,0,0,1);
	// 		glScaled(1,0.5,1);
	// 		glutSolidCube(0.5);
	// 	glPopMatrix();
	// glPopMatrix();




	//front
	glPushMatrix();
		glScaled(2,1,1);
		glTranslated(1,1,0);
		glutSolidSphere(0.3,20,20);
	glPopMatrix();


	//body
    glColor3f(0.255, 0.412, 0.882);
	glPushMatrix();
		glTranslated(-1, 1, 0);
		glRotated(90.0, 0.0, 90.0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj9 = gluNewQuadric();
		gluQuadricDrawStyle(qobj9, GLU_FILL);
		gluCylinder(qobj9, 0.2, 0.3, 3.0, 20,20);
	glPopMatrix();





	// glPushMatrix();
		// glTranslated(1.5,0.9,1.8);
	// 	glRotated(90.0, 0.0, 90.0, 0);
	// 	//glScaled(1,0.5,1);
	// 	GLUquadricObj * qobj10 = gluNewQuadric();
	// 	gluQuadricDrawStyle(qobj10, GLU_FILL);
	// 	gluCylinder(qobj10, 0.2, 0.2, 0.3, 20,20);
	// glPopMatrix();



	//front motor
	glColor3f(0.255, 0.412, 0.882);
	glPushMatrix();
		glScaled(1,0.5,0.5);
		glTranslated(1.4,1.8,2.2);
		glutSolidSphere(0.3,20,20);
	glPopMatrix();

	//rear motor
	glColor3f(0.255, 0.412, 0.882);
	glPushMatrix();
		glScaled(1,0.5,0.5);
		glTranslated(1.4,1.8,-2.2);
		glutSolidSphere(0.3,20,20);
	glPopMatrix();


	//front wing
	glColor3f(0.255, 0.412, 0.882);
	glPushMatrix();
		glTranslated(1.5,1.1,1.5);
		glScaled(1,0.2,5);
		glutSolidCube(0.5);
	glPopMatrix();


	//front wing prism
	glPushMatrix();
		glTranslated(1.5,1.1,2.75);
		glRotated(180,0,1,0);
		glRotated(flapsDegree, -1,0,0);
		glScaled(0.5,0.8,0.1);
		triangularPrism();
	glPopMatrix();

	//back wing prism
	glPushMatrix();
		glTranslated(1.5,1.1,-2.75);
		glRotated(flapsDegree, -1,0,0);
		glScaled(0.5,0.8,0.1);
		triangularPrism();
	glPopMatrix();


	//front wheel
    glColor3f(0.000, 0.749, 1.000);
	glPushMatrix();
		glTranslated(2, 1, 0);
		glRotated(90.0, 1, 0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj22 = gluNewQuadric();
		gluQuadricDrawStyle(qobj22, GLU_FILL);
		gluCylinder(qobj22, 0.04, 0.04, 0.5, 20,20);
	glPopMatrix();

	glColor3f(0.4,0.4,0.4);
	glPushMatrix();
		glTranslated(2, 0.35, 0);
		glScaled(1,1,0.5);
		//glRotated(90.0, 1, 0, 0);
		//glRotated(90.0, 1,0,0);
		glutSolidTorus(0.07, 0.07, 50,50);
	glPopMatrix();

	//other wheels
    glColor3f(0.000, 0.749, 1.000);
	glPushMatrix();
		glTranslated(1.5, 1, 0.2);
		glRotated(90.0, 1, 0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj23 = gluNewQuadric();
		gluQuadricDrawStyle(qobj23, GLU_FILL);
		gluCylinder(qobj23, 0.04, 0.04, 0.4, 20,20);
	glPopMatrix();

	glColor3f(0.4,0.4,0.4);
	glPushMatrix();
		glTranslated(1.5, 0.45, 0.2);
		glScaled(1,1,0.5);
		//glRotated(90.0, 1, 0, 0);
		//glRotated(90.0, 1,0,0);
		glutSolidTorus(0.07, 0.07, 50,50);
	glPopMatrix();
	
	////

    glColor3f(0.000, 0.749, 1.000);
	glPushMatrix();
		glTranslated(1.5, 1, -0.2);
		glRotated(90.0, 1, 0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj24 = gluNewQuadric();
		gluQuadricDrawStyle(qobj24, GLU_FILL);
		gluCylinder(qobj24, 0.04, 0.04, 0.4, 20,20);
	glPopMatrix();

	glColor3f(0.4,0.4,0.4);
	glPushMatrix();
		glTranslated(1.5, 0.45, -0.2);
		glScaled(1,1,0.5);
		//glRotated(90.0, 1, 0, 0);
		//glRotated(90.0, 1,0,0);
		glutSolidTorus(0.07, 0.07, 50,50);
	glPopMatrix();



glPopMatrix();




/*
	glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES);
    glNormal3f(0.6667f, 0.6667f, 0.3334f);
    glVertex3f(1, 0, 0);
    glVertex3f(0, 1, 0);
    glVertex3f(0, 0, 2);

    glNormal3f(-0.6667f, 0.6667f, 0.3334f);
    glVertex3f(-1, 0, 0);
    glVertex3f(0, 0, 2);
    glVertex3f(0, 1, 0);

    glNormal3f(0, 0, -1);
    glVertex3f(1, 0, 0);
    glVertex3f(0, 0, 2);
    glVertex3f(-1, 0, 0);

    glNormal3f(0, -1, 0);
    glVertex3f(1, 0, 0);
    glVertex3f(-1, 0, 0);
    glVertex3f(0, 1, 0);
    glEnd();
*/



/*
	glPushMatrix();
		glTranslated(0.25,0.25,0.25);
		glutSolidCube(0.5);
	glPopMatrix();

	glPushMatrix();
		glRotated(30, 0,0,-1);
		glTranslated(0.25,0.25,0.25);
		glutSolidCube(0.5);
	glPopMatrix();
*/