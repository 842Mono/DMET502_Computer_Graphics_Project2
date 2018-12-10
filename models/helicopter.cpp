double legsSpace = 0.4;

glPushMatrix();
	glRotated(ca2rot, 0, 1, 0);
	glRotated(slightFront, -1,0,-1);
	glTranslated(0,copterYTrans + verticalElevation,3);
	//glTranslated(copterXTrans, copterYTrans, copterZtrans);

    //far leg
    glColor3f(0.7,0.7,0.7);
	glPushMatrix();
		glTranslated(-0.25, 0.2, -0.45);
		glRotated(90.0, 0.0, 90.0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj6 = gluNewQuadric();
		gluQuadricDrawStyle(qobj6, GLU_FILL);
		gluCylinder(qobj6, 0.05, 0.05, 2.0, 20,20);
	glPopMatrix();

	glPushMatrix();
		glTranslated(0.3, 0.2, -0.45);
		glRotated(70.0, -1.0, 0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj7 = gluNewQuadric();
		gluQuadricDrawStyle(qobj7, GLU_FILL);
		gluCylinder(qobj7, 0.05, 0.05, 0.3, 20,20);
    glPopMatrix();
    
	glPushMatrix();
		glTranslated(0.3 + legsSpace, 0.2, -0.45);
		glRotated(70.0, -1.0, 0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj8 = gluNewQuadric();
		gluQuadricDrawStyle(qobj8, GLU_FILL);
		gluCylinder(qobj8, 0.05, 0.05, 0.3, 20,20);
	glPopMatrix();



	//helicopter
	//back body
    glPushMatrix();
        glColor3f(0.741, 0.718, 0.420);
		glTranslated(0,1.0,0); // cone at (1,0,1)
		glRotated(90, 0, -1, 0);
		glutSolidCone(0.2, 1.5, 20, 18);
    glPopMatrix();

    //tail
	glColor3f(0.4,0.4,0.4);
	glPushMatrix();
		glTranslated(-1.2,1,0);
		glRotated(copterTailRotation, 0,0,1);

		glPushMatrix();
			glRotated(20,0,0,1);
			glRotated(90,1,0,0);
			glRotated(90,0,-1,0);
			glScaled(0.6, 0.07, 0.08);
			//glTranslated(0.8, 17.5, -0.5);
			glutSolidCube(1.0);
		glPopMatrix();
		
		glPushMatrix();
			glRotated(-30,0,0,1);
			glRotated(90,1,0,0);
			glRotated(90,0,-1,0);
			glScaled(0.6, 0.07, 0.08);
			//glTranslated(0.8, 17.5, -0.5);
			glutSolidCube(1.0);
		glPopMatrix();

		glPushMatrix();
			glRotated(75,0,0,1);
			glRotated(90,1,0,0);
			glRotated(90,0,-1,0);
			glScaled(0.6, 0.07, 0.08);
			//glTranslated(0.8, 17.5, -0.5);
			glutSolidCube(1.0);
		glPopMatrix();
	glPopMatrix();

	//tail circle
	glColor3f(0.4,0.4,0.4);
	glPushMatrix();
        glTranslated(-1.2,1,0);
		//glRotated(90.0, 1,0,0);
		glutSolidTorus(0.05,0.3, 50,50);
	glPopMatrix();
	





    
    
	//body
    glPushMatrix();
        glColor3f(1.000, 0.843, 0);
		glScaled(0.5, 0.4, 0.25);
		glTranslated(1.0, 2.0 ,0); // dodecahedron at (1,0,0)
        glutSolidDodecahedron();
    glPopMatrix();
    
	//top cone
    glPushMatrix();
        glColor3f(0.4,0.4,0.4);
		glTranslated(0.5, 1.8, 0);
		glRotated(90.0, 1, 0, 0);
		glScaled(1,1,0.1);
		GLUquadricObj * qobj2 = gluNewQuadric();
		gluQuadricDrawStyle(qobj2,GLU_FILL);
		gluCylinder(qobj2, 0.1, 0.2, 5.0, 20, 15);
    glPopMatrix();
    


	//blades
	// glPushMatrix();
	// 	glTranslated(1.5, 1.8, 0);
	// 	glScaled(2, 0.07, 0.2);
	// 	glutWireCube(1.0);
	// glPopMatrix();

	// glPushMatrix();
	// 	glTranslated(0.5,0.5,0.5);
	// 	glRotated(90,0,1,0);
	// 	glScaled(2, 0.07, 0.2);
	// 	glTranslated(0.8, 17.5, -0.5);
	// 	glutWireCube(1.0);
	// glPopMatrix();
    glPushMatrix();
        glColor3f(0.7,0.7,0.7);
		glTranslated(0.5,1.7,0);
		glRotated(copterBladesRotation, 0, 1, 0);
		glPushMatrix();
			//glTranslated(0.5,0.5,0.5);
			glRotated(90,0,-1,0);
			glScaled(3, 0.07, 0.2);
			//glTranslated(0.8, 17.5, -0.5);
			glutSolidCube(1.0);
		glPopMatrix();

		glPushMatrix();
			//glTranslated(0.5,0.5,0.5);
			//glRotated(90,0,-1,0);
			glScaled(3, 0.07, 0.2);
			//glTranslated(0.8, 17.5, -0.5);
			glutSolidCube(1.0);
		glPopMatrix();
	glPopMatrix();



    //near leg
    glColor3f(0.7,0.7,0.7);
	glPushMatrix();
		glTranslated(-0.25, 0.2, 0.45);
		glRotated(90.0, 0.0, 90.0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj3 = gluNewQuadric();
		gluQuadricDrawStyle(qobj3, GLU_FILL);
		gluCylinder(qobj3, 0.05, 0.05, 2.0, 20,20);
	glPopMatrix();

	glPushMatrix();
		glTranslated(0.3, 0.2, 0.45);
		glRotated(110.0, -1.0, 0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj4 = gluNewQuadric();
		gluQuadricDrawStyle(qobj4, GLU_FILL);
		gluCylinder(qobj4, 0.05, 0.05, 0.3, 20,20);
    glPopMatrix();
    
	glPushMatrix();
		glTranslated(0.3 + legsSpace, 0.2, 0.45);
		glRotated(110.0, -1.0, 0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj5 = gluNewQuadric();
		gluQuadricDrawStyle(qobj5, GLU_FILL);
		gluCylinder(qobj5, 0.05, 0.05, 0.3, 20,20);
	glPopMatrix();
    
glPopMatrix();