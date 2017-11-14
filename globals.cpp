double potRotation = 0;
bool upDown = false;


//left right bottom top near far
double a1 = -2.0*64/48.0;
double a2 = 2.0*64/48.0;
double a3 = -2.0;
double a4 = 2.0;
double a5 = 0.1;
double a6 = 100;

double bx1 = 2.0;
double by1 = 2.0;
double bz1 = 2.0;
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

double copterRotation1 = 90;
double copterRotation2 = 0;
double copterRotation3 = -1;
double copterRotation4 = 0;

double copterXTrans = 3;
double copterYTrans = 3;
double copterZtrans = -4;

double planeRotationY = 0;


double planeTranslationx = -4; //1;
double planeTranslationy = 0;
double planeTranslationz = 0;


double carTranslationx = -5;
double carTranslationy = 0;
double carTranslationz = -5;

double carRotationY = 0;

double baloonTranslationZ = -5;






double ufoVerticalTranslation = 0;

int p0[2];
int p1[2];
int p2[2];
int p3[2];
int tar=4;
double res1[2];
float t1 = 0;


double* bezier(float t, int* p0,int* p1,int* p2,int* p3)
{
	res1[0]=pow((1-t),3)*p0[0]+3*t*pow((1-t),2)*p1[0]+3*pow(t,2)*(1-t)*p2[0]+pow(t,3)*p3[0];
	res1[1]=pow((1-t),3)*p0[1]+3*t*pow((1-t),2)*p1[1]+3*pow(t,2)*(1-t)*p2[1]+pow(t,3)*p3[1];
	return res1;
}

bool ufoVerticalToggle = true;

double ufoXTranslation = 5;
double ufoZTranslation = 5;