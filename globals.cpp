double potRotation = 0;
bool upDown = false;


//left right bottom top near far
double a1 = -15; //-2.0*64/48.0;
double a2 = 15; //2.0*64/48.0;
double a3 = -15; //-2.0;
double a4 = 15; //2.0;
double a5 = -5; //0.1;
double a6 = 1000;

double isometric = 15;

double bx1 = isometric;//2.0;
double by1 = 9;//isometric;//2.0; //raise for top
double bz1 = isometric;//2.0; //zero for top
double bx2 = 0.0;
double by2 = 0.0; //-100
double bz2 = 0.0;
double bx3 = 0.0;
double by3 = 1.0;
double bz3 = 0.0;


double body1 = -0.25; //0.45; // 0.0; //0.45
double body2 = 0.2; //0.2; //1.0; //0.2
double body3 = 0.45; //0.1; //0.0; //0.1


double sphereTranslation1 = 1.8;
double sphereTranslation2 = 0.25;
double sphereTranslation3 = 0.5;

// double copterRotation1 = 90;
// double copterRotation2 = 0;
// double copterRotation3 = -1;
// double copterRotation4 = 0;

double copterXTrans = 0;//3;
double copterYTrans = 0;//3;
double copterZtrans = 0;//-4;

double planeRotationY = 0;


double planeTranslationx = 0; //-4; //1;
double planeTranslationy = 0; //5;
double planeTranslationz = 0;


double carTranslationx = 0;//-5;
double carTranslationy = 0;
double carTranslationz = 0;//-5;

double carRotationY = 0;

double baloonTranslationZ = -5;

double baloonRotAnim = 0;

int carPhaseCtrl = 0;
int carPhaseCounter = 0;


bool carAnim = false;
bool copterAnim1 = false;
bool copterAnim2 = false;
bool ufoAnim = false;
bool baloonAnim = false;
bool rocketAnim = false;
bool planeAnim1 = false;
bool planeAnim2 = false;

double ca2rot = 0;
double slightFront = 0;
double verticalElevation = 0;


double ufoVerticalTranslation = 0;




//plane takeoff & land
int planeState1 = 0;
double tailsDegree = 90;
double flapsDegree = 0;



//plane open and close



int p0d[2];
int p1d[2];
int p2d[2];
int p3d[2];
double resd[2];
float td = 0.5;
double* bezierd(float t, int* p0,int* p1,int* p2,int* p3)
{
	resd[0]=pow((1-t),3)*p0[0]+3*t*pow((1-t),2)*p1[0]+3*pow(t,2)*(1-t)*p2[0]+pow(t,3)*p3[0];
	resd[1]=pow((1-t),3)*p0[1]+3*t*pow((1-t),2)*p1[1]+3*pow(t,2)*(1-t)*p2[1]+pow(t,3)*p3[1];
	return resd;
}



//ufo
int p0b[2];
int p1b[2];
int p2b[2];
int p3b[2];
double resb[2];
float tb = 0;
double* bezierb(float t, int* p0,int* p1,int* p2,int* p3)
{
	resb[0]=pow((1-t),3)*p0[0]+3*t*pow((1-t),2)*p1[0]+3*pow(t,2)*(1-t)*p2[0]+pow(t,3)*p3[0];
	resb[1]=pow((1-t),3)*p0[1]+3*t*pow((1-t),2)*p1[1]+3*pow(t,2)*(1-t)*p2[1]+pow(t,3)*p3[1];
	return resb;
}


//rocket
int p0c[2];
int p1c[2];
int p2c[2];
int p3c[2];
double resc[2];
float tc = 0.5;
double* bezierc(float t, int* p0,int* p1,int* p2,int* p3)
{
	resc[0]=pow((1-t),3)*p0[0]+3*t*pow((1-t),2)*p1[0]+3*pow(t,2)*(1-t)*p2[0]+pow(t,3)*p3[0];
	resc[1]=pow((1-t),3)*p0[1]+3*t*pow((1-t),2)*p1[1]+3*pow(t,2)*(1-t)*p2[1]+pow(t,3)*p3[1];
	return resb;
}

double rocketVertical = 0;



//helicopter
int p0[2];
int p1[2];
int p2[2];
int p3[2];
double res1[2];
float t1 = 0;


int tar=4;
double* bezier(float t, int* p0,int* p1,int* p2,int* p3)
{
	res1[0]=pow((1-t),3)*p0[0]+3*t*pow((1-t),2)*p1[0]+3*pow(t,2)*(1-t)*p2[0]+pow(t,3)*p3[0];
	res1[1]=pow((1-t),3)*p0[1]+3*t*pow((1-t),2)*p1[1]+3*pow(t,2)*(1-t)*p2[1]+pow(t,3)*p3[1];
	return res1;
}

bool ufoVerticalToggle = true;

double ufoXTranslation = 5;
double ufoZTranslation = 5;



void triangularPrism()
{
	glBegin(GL_QUADS);
		glVertex3f(0.5, 0, 0.5);
		glVertex3f(0.5, 0, -0.5);
		glVertex3f(-0.5, 0, -0.5);
		glVertex3f(-0.5, 0, 0.5);

		glVertex3f(0.5,0,-0.5);
		glVertex3f(0.5,1,-0.5);
		glVertex3f(-0.5,1,-0.5);
		glVertex3f(-0.5,0,-0.5);

		glVertex3f(0.5,1,-0.5);
		glVertex3f(-0.5,1,-0.5);
		glVertex3f(-0.5,0,0.5);
		glVertex3f(0.5,0,0.5);
	glEnd();
	glBegin(GL_TRIANGLES);
		glVertex3f(0.5,0,0.5);
		glVertex3f(0.5,1,-0.5);
		glVertex3f(0.5,0,-0.5);

		glVertex3f(-0.5,0,0.5);
		glVertex3f(-0.5,1,-0.5);
		glVertex3f(-0.5,0,-0.5);
    glEnd();
}

double copterBladesRotation = 0;
double copterTailRotation = 0;


//void shovedPrism()





double camRot = 0;

bool rotate = false;

bool top = false;


bool globalAnim = false;