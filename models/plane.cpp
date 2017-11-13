glPushMatrix();


    glColor3f(0.255, 0.412, 0.882);
	glPushMatrix();
		glTranslated(0, 1, 0);
		glRotated(90.0, 0.0, 90.0, 0);
		//glScaled(1,0.5,1);
		GLUquadricObj * qobj9 = gluNewQuadric();
		gluQuadricDrawStyle(qobj9, GLU_FILL);
		gluCylinder(qobj9, 0.3, 0.3, 2.0, 20,20);
	glPopMatrix();


glPopMatrix();