glPushMatrix();


    glColor3f(0.878, 1.000, 1.000);
    glPushMatrix();
        glScaled(20, 1, 25);
        glTranslated(0, -1, 0);
        glutSolidCube(1.0);
    glPopMatrix();


    glColor3f(0.941, 1.000, 1.000);
    glPushMatrix();
        glScaled(60, 1, 60);
        glTranslated(0, -2, 0);
        glutSolidCube(1.0);
    glPopMatrix();




    glColor3f(0.941, 1.000, 1.000);
    glPushMatrix();
        glScaled(60, 1, 60);
        glTranslated(0, 60, 0);
        glutSolidCube(1.0);
    glPopMatrix();





    glColor3f(0, 0, 1.000);
    glPushMatrix();
        glTranslated(-30, 28, 0);
        glScaled(0.1, 60, 60);
        glutSolidCube(1.0);
    glPopMatrix();


    glColor3f(0, 1.000, 0);
    glPushMatrix();
        glTranslated(30, 28, 0);
        glScaled(0.1, 60, 60);
        glutSolidCube(1.0);
    glPopMatrix();






    glColor3f(1,0,0);
    glPushMatrix();
        glTranslated(0, 28, 30);
        glScaled(60, 60, 0.1);
        glutSolidCube(1.0);
    glPopMatrix();


    glColor3f(1,1,0);
    glPushMatrix();
        glTranslated(0, 28, -30);
        glScaled(60, 60, 0.1);
        glutSolidCube(1.0);
    glPopMatrix();




glPopMatrix();